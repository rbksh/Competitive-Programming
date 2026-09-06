#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int count = 0;
    for (char c : s) {
        if (c == '4' || c == '7') {
            count++;
        }
    }

    if (count == 4 || count == 7) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}