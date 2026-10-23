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

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (i%2 != 0) {
                if (j%2 != 0) {
                    cout << "0";
                } else {
                    cout << "1";
                }
            } else {
                if(j%2 != 0) {
                    cout << "1";
                } else {
                    cout << "0";
                }
            }
        }
        cout << endl;
    }



    return 0;

}