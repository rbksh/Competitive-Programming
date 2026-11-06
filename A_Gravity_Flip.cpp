#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <numeric>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <queue>
#include <utility>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; 
    cin >> n;
    
    int total_columns = n; 

    vector<int> NumberOfCubes;
    while (n--) {
        int a; 
        cin >> a;
        NumberOfCubes.push_back(a);
    }
    
    sort(NumberOfCubes.begin(), NumberOfCubes.end());

    for (int i = 0; i < total_columns; i++) {
        cout << NumberOfCubes[i] << (i == total_columns - 1 ? "" : " ");
    }
    cout << endl;

    return 0;
}