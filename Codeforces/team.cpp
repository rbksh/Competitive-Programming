#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;

    if (n < 1 || n > 1000) {
        return 0;
    }

    int count = 0;

    while (n > 0) {
        int petya, vasya, tonya;
        cin >> petya >> vasya >> tonya;

        if ((petya == 0 || petya == 1) && 
            (vasya == 0 || vasya == 1) && 
            (tonya == 0 || tonya == 1)) {
            
            if (petya + vasya + tonya >= 2) {
                count++;
            }
        }

        n--;
    }

    cout << count << "\n";

    return 0;
}