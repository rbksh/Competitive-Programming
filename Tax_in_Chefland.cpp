#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    if (t>=1 && t<=100) {
        while (t--) {
            int x;
            cin >> x;
            if (x>=1 && x<=1000) {
                if (x>100) {
                    int final_money = x-10;
                    cout << final_money << endl;
                } else if (x<100) {
                    int final_money = x;
                    cout << final_money << endl;
                } else if (x=100) {
                    cout << 100 << endl;
                }
            }
        }
    }
    return 0;
}