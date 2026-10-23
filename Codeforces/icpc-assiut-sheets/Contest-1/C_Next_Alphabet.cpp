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
    char ch;
    if (!(cin >> ch)) return 0;

    int next_alphabet = int(ch) +1;
    if (ch=='z') {
        cout << 'a' << endl;
    } else {
        cout << char(next_alphabet) << endl;
    }

    return 0;

}