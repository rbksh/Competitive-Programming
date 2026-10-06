#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    if (t>=1 && t<=1000) {
        while (t--) {
            int x,y;
            cin >> x >> y;
            if (x>=100 && y>=100 && x<=200 && y<=200) {
                if (x!=y) {
                    if (x>y) {
                        cout << "A" << endl;
                    } else if (x<y){
                        cout << "B" << endl;
                    }
                }
            }
        }
    }
    return 0;
}