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

    long long n;
    if(!(cin >> n)) return 0;

    vector <int> digits;
    if (n==0) {
        digits.push_back(0);
    }

    while (n>0) {
        int digit = n%10;
        digits.push_back(digit);
        n=n/10;
    }
    int luckNumCount = 0;

    for (int x: digits) {
        if (x== 4 || x==7) {
            luckNumCount++;
        } 
    }
    if (luckNumCount == 4 || luckNumCount == 7) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;

}