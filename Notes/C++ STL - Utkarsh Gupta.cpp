#include <iostream>
#include <vector>

using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Demonstration code
    vector<int> v(10, 104); // Note: 'h' evaluates to ASCII 104 in an int vector
    cout << v[0] << endl;

    long long t;
    if (!(cin >> t)) return 0;
    while (t--) {
        // Solution code goes here
    }

    return 0;
}