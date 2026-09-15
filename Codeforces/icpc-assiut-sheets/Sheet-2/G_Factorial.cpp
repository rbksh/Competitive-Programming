#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        long long fact = 1;
        // if (n == 0) {
        //     fact = 1;
        //     cout << fact << endl;
        //     break;
        // }

        for (int i = n; i >= 1; i--) {
            fact = fact*i;
        }
        cout << fact << endl;
    }
    return 0;
}