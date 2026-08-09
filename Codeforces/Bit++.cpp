#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif
    int x = 0;
    int n;
    cin >> n;

    if (n < 1 || n > 150) {
        return 0;
    }

    vector<string> statements;

    while (n > 0) {
        string statement;
        cin >> statement;
        statements.push_back(statement);
        n--;
    }

    for (string s : statements) {
        if (s.length() == 3) {
            if (s[0] == '+' && s[1] == '+' && s[2] == 'X') {
                x++;
            } else if (s[0] == '-' && s[1] == '-' && s[2] == 'X') {
                x--;
            } else if (s[0] == 'X' && s[1] == '+' && s[2] == '+') {
                x++;
            } else if (s[0] == 'X' && s[1] == '-' && s[2] == '-') {
                x--;
            }
        }
    }

    cout << x << "\n";

    return 0;
}