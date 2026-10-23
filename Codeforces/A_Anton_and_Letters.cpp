<<<<<<< HEAD
#include <bits/stdc++.h>

=======
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <utility>
#include <string>
#include <vector>
#include <map>
#include <cmath>
#include <set>
>>>>>>> 9f7d0db5be05d5b819190c4c762d55d3ec9dd73e
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

<<<<<<< HEAD
    string s;
    getline(cin, s);

    unordered_set<char> letters;

    for (char ch : s) {
        if (ch >= 'a' && ch <= 'z') {
            letters.insert(ch);
        }
    }

    cout << letters.size() << "\n";

    return 0;
=======
    vector <char> characters;
    for (int i = 1; i <= characters.size()-1; i++) {
        char ch;
        cin >> ch;
        characters.push_back(ch);
    }

    sort(characters.begin(),characters.end());

    if (characters.size() == 0){
        cout << 0 << endl;
    }

    characters.erase(unique(characters.begin(),characters.end()), characters.end());

    cout << characters.size() << endl;


>>>>>>> 9f7d0db5be05d5b819190c4c762d55d3ec9dd73e
}