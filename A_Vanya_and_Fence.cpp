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

    long long n,h;
    if(!(cin >> n >> h)) return 0;
    vector <int> heights;
    while (n--) {
        long long a;
        cin >> a;
        heights.push_back(a);
    }
    int roadWidth = 0;

    for (int x: heights) {
        if (x<=h) {
            roadWidth++;
        } else if (x>h) {
            roadWidth+=2;
        }
    }
    cout << roadWidth << endl;

    return 0;


}