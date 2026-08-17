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
#include <utility>

using namespace std;

int main() {
    long long l1,r1,l2,r2;
    cin >> l1 >> r1 >> l2 >> r2;
    bool intersectionExists = false;
    int start_intersection = max(l1,l2);
    int end_intersection = min(r1,r2); 
    // range is the intersecting interval
    if (start_intersection<=end_intersection) {
        intersectionExists = true;
        cout << start_intersection <<" " << end_intersection << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}