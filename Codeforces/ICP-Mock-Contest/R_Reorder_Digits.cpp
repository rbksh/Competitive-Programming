#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    if (!(cin >> s)) return 0;

    vector<char> even_indices;
    vector<char> odd_indices;

    for (int i = 0; i < (int)s.length(); i++) {
        if (i % 2 == 0) {
            even_indices.push_back(s[i]);
        } else {
            odd_indices.push_back(s[i]);
        }
    }
    

    reverse(odd_indices.begin(), odd_indices.end());

    even_indices.insert(even_indices.end(), odd_indices.begin(), odd_indices.end());

    for (char x : even_indices) {
        cout << x;
    }

    return 0;
}