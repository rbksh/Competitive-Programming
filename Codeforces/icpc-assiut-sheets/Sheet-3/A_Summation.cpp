#include <bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;

    long long arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    long long summation = 0;
    for (int i = 0; i < n; i++) {
        summation += arr[i];
    }
    cout << abs(summation) << endl;
}