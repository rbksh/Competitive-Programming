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
    long long a,b;
    char s;
    cin >> a >> s >> b;
    if (s == '+') {
        cout << a+b << endl;
    } else if (s == '-') {
        cout << a-b << endl;

    } else if (s=='*'){
        cout << a*b << endl;
    } else if (s=='/') {
        cout << a/b << endl;
    }
    return 0;

}