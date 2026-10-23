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

    double x;
    cin >> x;
    double service_tax = x + x/10;
    double total_bill = service_tax + 0.05*service_tax;

    cout << fixed << setprecision(6)<< total_bill << endl;



    return 0;

}