#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    long long x;
    cin >> x;

    int countDivisors = 0;

    for (int i = 1; i <= x; i++) {
        if (x%i == 0) {
            countDivisors++;
        }
    }
    if (countDivisors == 2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}