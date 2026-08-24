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

    string s,t;
    if(!(cin >> s >> t)) return 0;

    reverse(s.begin(),s.end());
    if (s==t) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }


}