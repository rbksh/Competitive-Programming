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

    string s;
    if (!(cin >> s)) return 0;
    if (s.length()>=1 && s.length()<=15) {
        if (s=="Hello,World!") {
            cout << "AC" << endl;
        } else {
            cout << "WA" << endl;
        }
    }
    return 0;

}