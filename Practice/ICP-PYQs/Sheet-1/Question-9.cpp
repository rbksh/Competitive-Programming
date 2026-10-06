#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    if(n > 18) {
        cout << n << " is greater than 18" << endl;
    } else if (n < 18) {
        cout << n << " is less than 18" << endl;
    } else if (n = 18) {
        cout << n << " is equal to 18" << endl;
    }
}