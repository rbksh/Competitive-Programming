#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b; cin >> a >> b;
    
    vector <int> v1; vector <int> v2;
    for (int i = 1; i <= a; i++) {
        if (a%i == 0) {
            v1.push_back(i);
        }
    }

    for (int i = 1; i <= b; i++) {
        if (b%i == 0) {
            v2.push_back(i);
        }
    }

    vector <int> common;

    int pointer1 = 0; int pointer2 = 0;
    while (pointer1 < v1.size() && pointer2 < v2.size()) {
        if (v1[pointer1] == v2[pointer2]) {
            common.push_back(v1[pointer1]);
            pointer1++;
            pointer2++;
        } else if (v1[pointer1] > v2[pointer2]) {
            pointer2++;
        } else {
            pointer1++;
        }
    }

    int gcd = common[0];
    for (int i = 0; i < common.size(); i++) {
        if (gcd < common[i]) {
            gcd = common[i];
        }
    }

    cout << gcd << endl;

   return 0;
}