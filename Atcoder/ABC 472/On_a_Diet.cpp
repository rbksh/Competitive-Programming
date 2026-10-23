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

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n,m,k;
    if(!(cin >> n >> m >> k)) return 0;
    vector <int> calories(n+1);

    while (n--) {
        int a;
        cin >> a;
        calories.push_back(a);
    }



}