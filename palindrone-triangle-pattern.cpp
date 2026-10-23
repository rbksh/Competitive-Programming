#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    int x = 1;
    int y = 1;

    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= n-i; j++) {
            cout << " ";
        }

        for (int j = 1; j <= i; j++) {
            if (j == 1) {
                cout << x <<;
            } else {
                y = x++;
                cout << y << x << y <<;
            }

        }
    }
   return 0;
}