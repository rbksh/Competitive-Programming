#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int m;
    cin >> m;
    
    while (m--) {
        int type;
        int amount;
        cin >> type >> amount;
        
        if (type == 1) {
            int finalAmt = n+amount;
            cout << finalAmt << endl;
        } else if (type == 2) {
            if (n < amount) {
                cout << "Insufficient Funds" << endl;
            } else if (n >= amount) {
                int finalAmt = n-amount;
                cout << finalAmt << endl;
            }
        }
    }
}