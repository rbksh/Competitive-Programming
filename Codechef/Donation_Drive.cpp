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
    if (!(cin >> t)) return 0;
    if (t>=1 && t<=200) {
        while (t--) {
            int n,x;
            cin >> n >> x;
            if (n>=1 && n>=x && n<=20) {
                int Remain = n-x;
                cout << Remain << endl;
            }
        }
    }
    return 0;

}