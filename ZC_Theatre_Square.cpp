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

    long long n,m,a;
    cin >> n >> m >> a;

    long long stones_length = (m+a-1)/a;
    long long stones_width = (n+a-1)/a;

    long long total_stones = stones_length*stones_width;
    cout << total_stones << endl;






    return 0;
}