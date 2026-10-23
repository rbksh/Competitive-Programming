#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <map>
#include <unordered_map>
#include <queue>
#include <set>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;
    
    int room_count = 0;

    while (n--) {
        int p, q;
        cin >> p >> q;
        if (q - p >= 2) {
            room_count++;
        }
    }
    
    cout << room_count << "\n";
    return 0;
}
