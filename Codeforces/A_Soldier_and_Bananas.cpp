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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n,k,w;
    if(!(cin >> k >> n >> w)) return 0;
    long long totalBill = (w*(w+1)/2)*k;


    if (totalBill > n) {
        long long borrowMoney = totalBill - n;
        cout << borrowMoney << endl;
    } else if (totalBill<=n) {
        cout << 0 << endl;
    }
    return 0;

}