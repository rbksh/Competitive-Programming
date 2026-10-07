#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(&cout);

    int n,a,b; cin >> n >> a >> b;
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        int temp = i;
        int digitSum = 0;
        while (temp > 0) {
            int digit = temp%10;
            digitSum+=digit;
            temp = temp/10;
        }
        if (digitSum >= a && digitSum <= b) {
            sum+=i;
        }
    }
    cout << sum << endl;
   return 0;
}