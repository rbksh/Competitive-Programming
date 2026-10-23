#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <map>
#include <unordered_map>
#include <queue>
#include <set>
#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    cin >> x;

    int steps = x/5;
    if (x%5 != 0) {
        steps++;
    }

    // if (x%5 == 0) {
    //     steps = x/5;
    // } else if (x%4 == 0) {
    //     steps = x/4;
    // } else if (x%3 == 0) {
    //     steps = x/3;
    // } else if (x%2 == 0) {
    //     steps = x/2;
    // } else {
    //     steps = x;
    // }

    cout << steps << endl;



    return 0;

}