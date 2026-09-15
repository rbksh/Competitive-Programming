#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    long long n;
    cin >> n;
    int temp = n;

    long long reverse = 0;

    while (n > 0) {
        long long digit = n%10;
        reverse = reverse*10 + digit;
        n = n/10;
    }

    cout << reverse << endl;

    if (reverse == temp) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}