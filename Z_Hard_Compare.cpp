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
    long long a,b,c,d;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    if (!(cin >>a >> b >> c >> d)) return 0;

    // long long exp1 = pow(a,b);
    // long long exp2 = pow(c,d);
    //if a^b>c^d then blna>dlnc
    //pow only works with integers for large values, loss of precision and rounding errors occur, hence its bettet to use logarithm and double. 
    

    double exp1 = b*(log(a));
    double exp2 = d*(log(c));

    if (exp1>exp2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}