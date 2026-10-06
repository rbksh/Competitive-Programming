#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif
    int n;
    cin >> n;

    vector<string> words;

    while (n > 0) {
        string word;
        cin >> word;
        words.push_back(word);
        n--;
    }

    for (string word : words) {
        int len = word.length();
        if (len > 10) {
            cout << word[0] << len - 2 << word[len - 1] << "\n";
        } else {
            cout << word << "\n";
        }
    }

    return 0;
}