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
    if(!(cin >> s)) return 0;

    int lowerCase = 0;
    int upperCase = 0;

    for (char c: s) {
        if (int(c) >=97 && int(c) <= 122 ) {
            lowerCase++;
        } else {
            upperCase++;
        }
        if (lowerCase>=upperCase) {
            for (char &c: s) {
                if(lowerCase>upperCase) {
                    tolower(static_cast<unsigned char> (c)); cout << s << endl;

                }
                if (lowerCase<upperCase) {
                    toupper(static_cast<unsigned char> (c));
                    cout << s << endl;
                } 
            }
        }
    }
    return 0;
}