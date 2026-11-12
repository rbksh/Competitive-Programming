#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <numeric>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <queue>
#include <utility>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int stringLength;
        cin >> stringLength;
        
        string targetString;
        cin >> targetString;

        int manualSwitches = 0;
        char currentPenColor = 'R';

        for (int index = 0; index < stringLength; index++) {
            if (targetString[index] != currentPenColor) {
                manualSwitches++;
            }
            
            if (targetString[index] == 'R') {
                currentPenColor = 'B';
            } else {
                currentPenColor = 'R';
            }
        }

        cout << manualSwitches << endl;
    }
    
}