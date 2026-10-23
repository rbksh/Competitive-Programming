#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <map>
#include <unordered_map>
#include <queue>
#include <set>
#include <cmath>

using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n; int k;
    if (!(cin >> n >> k)) return 0;

    for (int i=1; i<=k; i++) {
        int lastDigit = n%10;
        if (lastDigit == 0) {
            n=n/10;
        } else if (lastDigit!=0) {
            n=n-1;
        }
    }
    cout << n << endl;
    return 0;
}