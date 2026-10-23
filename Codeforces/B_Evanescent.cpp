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
#include <iomanip> 
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        string s;
        cin >> s;

        vector <char> characters;
        for (char c: s) {
            characters.push_back(c);
        }
        int size = characters.size();
        for (int i = 0; i <= size-1; i++) {
            if (characters[i] == characters[i+1]) {
                fill(characters.begin()+i, characters.begin()+i+2,s[i]);
            }
        }
    }


}