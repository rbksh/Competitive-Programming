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

    int a,b;
    if (!(cin >> a >> b)) return 0;
    char ch = '1';

    if (a>=1 && b>=1 && a<=50 && b<=50) {
        int Sum = a+b;
        cout << Sum << ch << endl;
    }
    return 0;

}