#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    if (n<0) {
        n=-n;
    }
    long long sum=0;
    long long product=1;
    if (n==0) {
        long long product = 0;
    }
    while (n>0) {
        long long digit = n%10;
        sum+=digit;
        product*=digit;
        n/=10;
    }
    cout << sum << " " << product << endl;
    return 0;
}