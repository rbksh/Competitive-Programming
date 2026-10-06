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

    int x,y;
    if (!(cin >> x >> y)) return 0;

    int clearDays = 7-(x+y);
    cout << clearDays << endl;

    return 0;



}