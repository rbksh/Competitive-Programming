#include <bits/stdc++.h>
using namespace std;
//method 1 - manual
int gcd1(int a, int b){
    if (a == 0 || b == 0) {
        return max(a,b);
    }

    int result = min(a,b);
    while (result > 0) {
        if (a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }
    return result;
}

//method 2 - euclidean algorithm

int gcd2(int a, int b) {
    if (a == 0) return b;
    if (b == 0) return a;
    if (a == b) return a;

    if (a > b) {
        return gcd2(a-b,b);
    return gcd2(a,b-a);
    }
}

//method 3 - modified euclidean algorithm





int main() {
    int a,b;
    cin >> a >> b;
    cout << gcd(a,b);

    return 0;
}