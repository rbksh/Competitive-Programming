#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <map>
#include <unordered_map>
#include <queue>
#include <set>

using namespace std;

int main() {
    long long n,k;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    if (!(cin >> n >> k)) return 0;
    // while (n++) {
    //     if (n%k==0) {
    //         cout << n;
    //         break;
    //     }
    // }

    long long ans = ((n/k)+1)*k;
    cout << ans << endl;
    
    return 0;
    
}