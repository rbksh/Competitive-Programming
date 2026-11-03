#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int count = 0;
    int n; cin >> n;
    for (int i = 1; i*i <= n; i++) {
        if (n%i == 0) {
            if (i == n/i) {
                count++;
            } else {
                count += 2;
            }
        }
    }
  
    if (count == 2) {
        cout << "prime" << endl;
    } else {
        cout << "not prime" << endl;
    }
   return 0;
}