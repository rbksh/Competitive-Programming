#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    vector<char> letters;
    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];
        
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        if (ch != 'a' && ch != 'o' && ch != 'y' && ch != 'e' && ch != 'u' && ch != 'i') {
            letters.push_back('.');
            letters.push_back(ch);
        }
    }

    for (int i = 0; i < letters.size(); i++) {
        cout << letters[i];
    }
    cout << endl;

    return 0;
}