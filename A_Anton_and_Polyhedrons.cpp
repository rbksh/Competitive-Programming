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

    int n; cin >> n;
    int totalFaces = 0;
    while (n--) {
        string s; cin >> s;
        if (s == "Icosahedron") {totalFaces += 20;}
        if (s == "Cube") {totalFaces += 6;}
        if (s == "Tetrahedron") {totalFaces += 4;}
        if (s == "Octahedron") {totalFaces += 8;}
        if (s == "Dodecahedron") {totalFaces += 12;}
    }
    cout << totalFaces << endl;
    return 0;
    
}