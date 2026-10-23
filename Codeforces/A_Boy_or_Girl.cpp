#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;
    
    sort(s.begin(), s.end()); //sorting means arranging all the letters in that string alphabetically, so that the same letters are side-by-side, and then the condition s[i] ! = s[i-1] gets rejected or its value is equal to false. and hence the progrtam won't proceed further
    
    int count = 0;
    for (int i = 0; i < s.length(); i++) { //because indexing of a string starts from 0, not from 1, if we start from 1, the string will overflow and the condition will evaluate to false.
        if (i == s.length() - 1 || s[i] != s[i + 1]) {
            count++;
        }
    }
    
    if (count % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
    
    return 0;
}
