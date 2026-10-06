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

    int y;
    if(!(cin >> y)) return 0;
    if (y>=1583 && y<=2023) {
        int total_days=0;
        if (y%4!=0) {
            total_days=365;
            cout << total_days << endl;
        } else if (y%4==0 && y%100!=0) {
            total_days=366;
            cout << total_days << endl;
        } else if (y%100==0 && y%400!=0) {
            total_days=365;
            cout << total_days << endl;
        } else if (y%400==0) {
            total_days=366;
            cout << total_days << endl;
        }
    }

    return 0;
}