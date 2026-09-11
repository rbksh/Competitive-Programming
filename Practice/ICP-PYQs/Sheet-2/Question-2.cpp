#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    
    if(a==b && b==c) {
        cout << "Equilateral" << endl;
    } else if (a!=b && b!=c) {
        cout << "Scalene" << endl;
    } else {
        cout << "Isoceles" << endl;
    }
}
