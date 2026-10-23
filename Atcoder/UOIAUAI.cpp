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
    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') {
        cout << "vowel" << endl;
    } else {
        cout << "consonant" << endl;
    }
    return 0;

}