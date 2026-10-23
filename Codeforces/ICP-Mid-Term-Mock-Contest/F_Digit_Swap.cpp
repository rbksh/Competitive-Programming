#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <map>
#include <unordered_map>
#include <queue>
#include <set>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int reverse = 0;

    while (n > 0) {
        int digit = n%10;
        reverse=reverse*10 + digit;
        n=n/10;
    }

    cout << reverse << endl;

    return 0;
}