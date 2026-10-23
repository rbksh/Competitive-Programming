#include <bits/stdc++.h>
using namespace std; 

int main() { 
    int a, b, c; 
    cin >> a >> b >> c; 

    if (a > 0 && b > 0 && c > 0 && a <= 100 && b <= 100 && c <= 100) { 
        if (a == b && b == c) { 
            cout << "Equilateral"; 
        } 
        else if (a == b || b == c || a == c) { 
            cout << "Isosceles"; 
        } 
        else { 
            cout << "Scalene"; 
        } 
    } 
    return 0; 
}
