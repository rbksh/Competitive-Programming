#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> v;
    while (n--) {
        int t;
        cin >> t;
        v.push_back(t);
    }
    int x;
    cin >> x;
    int y;
    cin >> y;
    
    v.insert(v.begin() + y, x);
    for (int x: v) {
        cout << x << " ";
    }
    
}