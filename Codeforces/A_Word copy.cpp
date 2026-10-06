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
#include <cctype>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    if(!(cin >> s)) return 0;

    int lowerCase = 0;
    int upperCase = 0;

    vector <char> letters;

    for (char c: s) {
        letters.push_back(c);
    }

    for (char &c: letters) {
        if (int(c) >=97 && int(c) <= 122) {
            lowerCase++;
        } else {
            upperCase++;
        }
    }
    
    if (upperCase > lowerCase) {
        transform(s.begin(),s.end(),s.begin(), ::toupper);
    } else if (upperCase < lowerCase) {
        transform(s.begin(),s.end(),s.begin(), ::tolower);
    } else if (upperCase == lowerCase) {
        transform(s.begin(),s.end(),s.begin(), ::tolower);

    }
    cout << s << endl;

    return 0;

}