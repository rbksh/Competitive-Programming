#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <map>
#include <unordered_map>
#include <queue>
#include <set>

using namespace std;

long long calcFunction(long long n) {
    if (n%2 == 0){
        return n/2;
    } else {
        return -(n+1)/2;
    }
}

int main() {
    long long n;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    if (!(cin >> n)) return 0;

    cout << calcFunction(n) << endl;
    return 0;

}