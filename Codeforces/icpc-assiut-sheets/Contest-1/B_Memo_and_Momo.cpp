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

    long long a,b,k;
    if(!(cin >> a >> b >> k)) return 0;
    if (a%k==0 && b%k==0) {
        cout << "Both" << endl;
    } else if (a%k==0 && b%k!=0) {
        cout << "Memo" << endl;
    } else if (a%k!=0 && b%k==0) {
        cout << "Momo" << endl;
    } else if (a%k!=0 && b%k!=0) {
        cout << "No One" << endl;
    }

    return 0;
}