#include <iostream>
#include <iomanip>
#include <algorithm>
#include <utility>
#include <string>
#include <vector>
#include <map>
#include <cmath>
#include <set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

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


}