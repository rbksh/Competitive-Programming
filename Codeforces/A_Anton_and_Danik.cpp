#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <map>
#include <unordered_map>
#include <queue>
#include <set>

using namespace std;

int main() {
    long long n;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    if (!(cin >> n)) return 0;

    string s;
    cin >> s;

    if (s.length() != n) {
        return 0; 
    }

    vector<char> games(n);
    for (int i = 0; i < n; i++) {
        games[i] = s[i];
    }

    long long winsofAnton = 0;
    long long winsofDanik = 0;

    for (int i = 0; i < n; i++) {
        if (games[i] == 'A') {
            winsofAnton++;
        } else if (games[i] == 'D') {
            winsofDanik++;
        }
    }

    if (winsofAnton > winsofDanik) {
        cout << "Anton" << "\n";
    } else if (winsofDanik > winsofAnton) {
        cout << "Danik" << "\n";
    } else {
        cout << "Friendship" << "\n";
    }

    return 0;
}
