#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int pwd;
    while (cin >> pwd ) {
        if (pwd == 1999) {
            cout << "Correct" << endl;
            break;
        } else {
            cout << "Wrong" << endl;
        }
    }
    return 0;
}