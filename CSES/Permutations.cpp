#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    vector <int> oddNumbers;
    vector <int> evenNumbers;
    // vector <int> mergedNumbers;
    for (int i = 1; i <= n; i++) {
        if (i%2 == 0) {
            oddNumbers.push_back(i);
        } else if (i%2 == 1) {
            evenNumbers.push_back(i);
        }
    }

    // oddNumbers.insert(oddNumbers.end(),evenNumbers.begin(),evenNumbers.end());
    if (n == 1) {
        cout << 1 << endl;
    }
    if (n == 2 || n == 3) {
        cout << "NO SOLUTION" << endl;
    }

    if (n >= 4) {
        for (int i = 0; i < oddNumbers.size(); i++) {
            cout << oddNumbers[i] << " ";
        }

        for (int i = 0; i < evenNumbers.size(); i++) {
            cout << evenNumbers[i] << " ";
        }
    }




   return 0;
}