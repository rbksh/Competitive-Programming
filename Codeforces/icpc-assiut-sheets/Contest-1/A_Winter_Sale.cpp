#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double x, p; 
    if (!(cin >> x >> p)) return 0;

    double original_p = (p * 100.0) / (100.0 - x);

    cout << fixed << setprecision(2) << original_p << endl;

    return 0;
}
