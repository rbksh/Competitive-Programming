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
    
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        int distance = abs(a - b);
        if (distance % 2 == 0) {
            if (a < b) {
                int j = a - 1;
                int k = n - b;
                if (j >= k) {
                    cout << "Jaivardhan\n";
                } else {
                    cout << "Krritin\n";
                }
            } else {
                int j = n - a;
                int k = b - 1;
                if (j >= k) {
                    cout << "Jaivardhan\n";
                } else {
                    cout << "Krritin\n";
                }
            }
        } else {
            if (a < b) {
                int j = a - 1;
                int k = n - b;
                if (k >= j) {
                    cout << "Krritin\n";
                } else {
                    cout << "Jaivardhan\n";
                }
            } else {
                int j = b - 1;
                int k = n - a;
                if (k >= j) {
                    cout << "Krritin\n";
                } else {
                    cout << "Jaivardhan\n";
                }
            }
        }
    }
    return 0;
}