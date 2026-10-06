#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    vector <pair<int,int>> numbers;
    int char1 = '0';
    int char2 = '1';
    while (t--) {
        int n,k;
        cin >> n >> k;
        numbers.emplace_back(n,k);
    }


}