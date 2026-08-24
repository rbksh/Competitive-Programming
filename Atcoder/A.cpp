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

    string s;
    if(!(cin >> s)) return 0;

    for (int i=0; i<=s.length()-1; i++) {
        if (s[i] != 'A') {
            s[i] = '.';
        }
    }
    cout << s << endl;


    return 0;

}