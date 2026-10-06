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

int nCr(int n, int r) {
    if (r>n) {
        return 0;
    } else if (r==n || r==0) {
        return 1;
    }
    return nCr(n-1,r-1) + nCr(n-1,r);
}

int main() {
    using ll = long long;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,m,k;
    if (!(cin >> n >> m >> k)) return 0;

    ll comb1 = nCr(n,2) + nCr(m,1);
    ll comb2 = nCr(n,2) + nCr(m,1) + nCr(k,1);
    ll comb3 = nCr(n,1) + nCr(m,1) + nCr(k,1);
    
    ll total = comb1+comb2+comb3;

    cout << total << endl;

    return 0;

}