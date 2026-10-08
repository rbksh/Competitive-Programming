#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s; cin >> s;
    vector <char> v;
    for (char ch : s) {
        v.push_back(ch);
    }

    if (v.empty()) {
        cout << 0 << "\n";
        return 0;
    }

    long long countA = 1, maxA = 1; 
    long long countG = 1, maxG = 1; 
    long long countC = 1, maxC = 1; 
    long long countT = 1, maxT = 1;

    char firstChar = v[0];
    if (firstChar == 'A') countA = maxA = 1;
    else if (firstChar == 'G') countG = maxG = 1;
    else if (firstChar == 'C') countC = maxC = 1;
    else if (firstChar == 'T') countT = maxT = 1;

    for (int i = 0; i < (long long)v.size() - 1; i++) {
        if (v[i] == v[i+1]) {
            if (v[i] == 'A') {
                countA++;
            } else if (v[i] == 'G') {
                countG++;
            } else if (v[i] == 'C') {
                countC++;
            } else if(v[i] == 'T') {
                countT++;
            }
        } else {
            
            if (v[i] == 'A') countA = 1;
            else if (v[i] == 'G') countG = 1;
            else if (v[i] == 'C') countC = 1;
            else if (v[i] == 'T') countT = 1;
        }
        
        maxA = max(maxA, countA);
        maxG = max(maxG, countG);
        maxC = max(maxC, countC);
        maxT = max(maxT, countT);
    }

    cout << max({maxA, maxG, maxC, maxT});
    return 0;
}