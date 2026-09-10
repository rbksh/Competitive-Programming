#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <numeric>
#include <utility> 

/*
optional libraries
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <queue>
*/
using namespace std;

int main() {
    
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
    
        int n;
        cin >> n;
        
        unordered_map<string, int> db;
        while (n--) {
            string s;
            cin >> s;
            db[s] = 0;
            if (db.find(s) == db.end()) {
                cout << "OK" << endl;
            } else {
                int count = ++db[s];
                cout << s << count << endl;
        }
    }
    
    return 0;
}
