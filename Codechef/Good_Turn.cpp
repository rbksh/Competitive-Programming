#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    if(t>=1 && t<=100) {
        while (t--) {
            int x,y;
            cin >> x >> y;
            if (x>=1 && y>=1 && x<=6 && y<=6) {
                int sum = x+y;
                if (sum>6) {
                    cout << "Yes" << endl;
                } else {
                    cout << "No" << endl;
                }
            }
        }
    }
    return 0;
}