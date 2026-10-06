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
    int a,b;
    long long c;
    char s;
    char q;
    cin >> a >> s >> b >> q >> c;
    int sum = a+b;
    int diff = (a-b);
    int prod = a*b;
    if (a>=0 && b>=0 && a<=100 & b<=100) {
        if (s=='+') {
            if (sum==c) {
                cout << "Yes" << endl;
            } else {
                cout << sum << endl;
            }
        }
        if (s=='-') {
            if (diff == c) {
                cout << "Yes" << endl;
            } else {
                cout << diff << endl;
            }
        }
        if (s=='*') {
            if (prod==c) {
                cout << "Yes" << endl;
            } else {
                cout << prod << endl;
            }
        }
    }
    return 0;
}