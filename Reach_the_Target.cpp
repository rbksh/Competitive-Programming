#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    if (t>=1 && t<=10) {
        while (t--) {
            int x,y;
            cin >> x >> y;
            if (x>=50 && y>=50 && x<=200 && y<=200) {
                if (x>y) {
                    //int target_score = x+1;
                    int runs_needed = x-y;
                    cout << runs_needed << endl;
                }
            }
        }
    }
}