#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c) {
    vector <char> vowels = {'a','e','i','o','u','A','E','I','O','U'};
    for (int i = 0; i <= vowels.size()-1; i++) {
        return (c == vowels[i]);
    }
}

int countVowels(string s) {
    int count = 0;
    for (int i = 0; i <= s.size()-1; i++) {
        if (isVowel(s[i])) {
            count++;
        }
    }
}

int bestWord(vector <string> words) {
    int max = words[0];
    for (int i = 0; i <= words.size()-1; i++) {
        int newCount = countVowels(words[i]);
        if (newCount > max) {
            max = newCount;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    vector <string> words;
    for (int i = 0; i <= n; i++) {
        cin >> words[i];
    }

    int maxCount = bestWord(words);
    cout << maxCount << endl;

   return 0;
}