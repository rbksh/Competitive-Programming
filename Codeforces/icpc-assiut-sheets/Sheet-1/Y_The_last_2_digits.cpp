#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a, b, c, d;
    if (!(cin >> a >> b >> c >> d)) return 0;

    a %= 100;
    b %= 100;
    c %= 100;
    d %= 100;

    long long product = (a * b * c * d) % 100;

    cout << setfill('0') << setw(2) << product << "\n";

    return 0;
}
