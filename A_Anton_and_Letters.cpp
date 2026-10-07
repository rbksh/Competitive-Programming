#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

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
}