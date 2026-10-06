#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    for (int i = 1; i <= n; ++i) {
        cout << string(i, '*');
        
        cout << string(2 * (n - i), ' ');
        

        cout << string(i, '*');
        
        cout << "\n";
    }

    return 0;
}