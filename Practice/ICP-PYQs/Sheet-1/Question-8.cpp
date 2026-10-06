#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    int b;
    cin >> b;
    int power = 1;
    
    while (b--) {
        power = power*a;
    }
    
    cout << power << endl;
}