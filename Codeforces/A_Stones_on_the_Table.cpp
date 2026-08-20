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
    vector <char> colors;

    if (n>=1 && n<=50) {
        while (n--) {
            char ch;
            cin >> ch;
            colors.push_back(ch);
        }
    }
    int stone_count = 0;
    for (int i=0; i<=colors.size()-1;i++) {
        if (colors[i] == colors[i+1]) {
            stone_count++;
        } 
    }
    cout << stone_count << endl;
    return 0;

}