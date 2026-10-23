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
    int t;
    cin >> t;

    if (t>=1 && t<=100) {
        while (t--) {
            long long a,b,c;
            ios_base::sync_with_stdio(false);
            cin.tie(NULL);
            if ((!cin>>a>>b>>c)) return 0;

            int range = max(a,b,c) - min(a,b,c);
            cout << range << endl;
        }
    }
}