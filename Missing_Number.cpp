#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long n;
    cin >> n;
    
    long long total_sum = n * (n + 1) / 2;
    long long given_sum = 0;
    
    for (int i = 0; i < n - 1; i++) {
        long long x;
        cin >> x;
        given_sum += x;
    }
    
    cout << total_sum - given_sum << "\n";
    
    return 0;
}