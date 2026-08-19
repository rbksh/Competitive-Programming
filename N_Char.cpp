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
    char x;
    cin >> x;
    int ascii_code = static_cast<int>(x);
    if (ascii_code>=97 && ascii_code<= 122) {
        ascii_code-=32;
        cout << char(ascii_code) << endl;
    } else if (ascii_code>=65 && ascii_code<=90) {
        ascii_code+=32;
        cout << char(ascii_code) << endl;
    }
    return 0;
}