#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    if (t>=1 && t<=1000) {
        while (t--) {
            int x,y;
            cin >> x >> y;
            if (x>=0 && y>=0 && x<=100 && y<=100) {
                if (x>y) {
                    cout << x << endl;
                } else if (x<y) {
                    cout << y << endl;
                } else if (x==y) {
                    cout << x << endl;
                }
            }
        }
    }
    return 0;
}