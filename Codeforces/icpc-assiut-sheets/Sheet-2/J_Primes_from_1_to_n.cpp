#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int countDivisors = 0;
        for (int j = 1; j <= i; j++) {
            if (i%j == 0) {
                countDivisors++;
            }
        }
        if (countDivisors == 2) {
            cout << i << " ";
        }
    }
    return 0;
}