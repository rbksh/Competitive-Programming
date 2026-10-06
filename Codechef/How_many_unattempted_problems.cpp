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

    if (x>=1 && y>=1 && x<=1000 && y<=1000) {
        int leftProbs =x-y;
        cout << leftProbs << endl;
    }
    return 0;

}