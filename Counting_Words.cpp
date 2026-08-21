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

    int t;
    if(!(cin >> t)) return 0;
    if (t>=1 && t<=100) {
        while (t--) {
            int n,m;
            cin >> n >> m;
            if (n>=1 && m>=1 && n<=100 && m<=100) {
                int totWords = n*m;
                cout << totWords << endl;
            }
        }
    }
    return 0;
}