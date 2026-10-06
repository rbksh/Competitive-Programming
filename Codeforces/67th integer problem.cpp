#include <iostream>
using namespace std;

int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif
    int t;
    cin >> t;

    if (t < 1 || t > 6767) {
        return 0;
    }

    while (t > 0) {
        int x;
        cin >> x;

        if (x >= -67 && x <= 67) {
            int y = x;
            cout << y << "\n";
        }

        t--;
    }

    return 0;
}