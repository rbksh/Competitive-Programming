#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    
    int reverse = 0;
    int copy = a;
    
    while (a > 0) {
        int digit = a%10;
        reverse=reverse*10 + digit;
        a=a/10;
    }
    
    if (reverse == copy) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
