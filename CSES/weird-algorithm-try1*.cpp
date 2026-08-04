#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif
    //int n;
    long long n;
    cin >> n;
    if (n!=1) {
        cout << n << " ";
        if (n%2==0) {
            n=n/2;
        } else if (n%2!=0) {
            n=n*3+1;
        }
    }
    cout << "1" << endl;
}
//just for safety, since n can vary from 1 to 10^9, we will use long long int
//question is based on the mathematical concept of the collatz conjecture, which states that for any positive integer n, the sequence defined by the following rules will always reach 1: