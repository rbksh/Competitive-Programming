#include <bits/stdc++.h>
using namespace std;

int main() {
    long long m,n;
    cin >> m >> n;
    long long m_lastdig = abs(m%10);
    long long n_lastdig = abs(n%10);
    long long sum = m_lastdig + n_lastdig;
    cout << sum << endl;
}