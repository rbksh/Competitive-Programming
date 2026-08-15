#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    if (a>=1 && b>=1 && a<=1000 && b<=1000) {
        int oneful_pairs;
        oneful_pairs = a+b+(a*b);
        if (oneful_pairs == 111) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}