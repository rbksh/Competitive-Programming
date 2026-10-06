#include <iostream>
#include <iomanip>
#include <algorithm>
#include <utility>
#include <string>
#include <vector>
#include <map>
#include <cmath>
#include <set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m, d;
    cin >> m >> d;

    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int N = daysInMonth[m];
    // more generalize formula could be something like N = N + (d-1) + (d-m+1)/2
    int totalColums = (N + d - 1 + 6) / 7;

    cout << totalColums << "\n";

    return 0;
}