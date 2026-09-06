#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int height = 0;
    int current_cubes = 0;

    for (int i = 1; i <= n; i++) {
        current_cubes+=i;
        if (current_cubes <= n) {
            n-=current_cubes;
            height++;
        } else {
            break;
        }
    }
    cout << height << endl;

    return 0;

}