#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int min_members = 6;
    int max_members = 8;
    if (n>=1 && n<=10) {
        if (n>=min_members && n<=max_members) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}