#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <map>
#include <unordered_map>
#include <queue>
#include <set>

using namespace std;

int main() {
    double n;
    cin >> n;
    long long integer_part = (long long)n; //convers the value of n into a big whole number and stores it in a new variable named integer_part, if it has a decimal point, it drops it. 
    double decimal_part = n-integer_part;

    if (decimal_part == 0) {
        cout << "int " << integer_part << endl;
    } else {
        cout << "float " << integer_part << " " << decimal_part << endl;
    }
    return 0;
}