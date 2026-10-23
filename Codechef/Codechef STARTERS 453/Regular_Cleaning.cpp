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
#include <iomanip>

using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if(!(cin >> n)) return 0;

    if (n%10 == 0) {
        cout << 10 << endl;
    } else if (n%10!=0) {
        int m=n%10;
        cout << 10-m << endl;
    }

    return 0;


}