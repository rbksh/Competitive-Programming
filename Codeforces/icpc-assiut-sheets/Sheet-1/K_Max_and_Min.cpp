#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a,b,c;
    cin >> a >> b >> c;
    long long max_num = max({a,b,c}); //cmath in-built function contains max and min functions which can take multiple arguments using initializer list.
    long long min_num = min({a,b,c});
    cout << min_num << " " << max_num << endl;
    return 0;
}