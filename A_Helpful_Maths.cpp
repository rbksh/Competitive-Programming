#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    if(!(cin >> s)) return 0;

    vector<char> num;
    for (char c : s) {
        if (c!='+') {
            num.push_back(c);
        }
    }

    sort(num.begin(),num.end());

    for (int i=0;i < num.size();i++) {
        cout << num[i];
        if (i < num.size()-1) {
            cout << "+";
        }
    }
    cout << "\n";
    return 0;
}