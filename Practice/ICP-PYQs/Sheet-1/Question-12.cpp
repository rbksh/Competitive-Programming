#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> v(n);
    
    for (int i = 0; i <= n; i++) {
        cin >> v[i];
    }
    int minVal = v[0];
    int sz = v.size();
    
    for (int i = 0; i <= sz-1; i++) {
        if (minVal > v[i]) {
            minVal = v[i];
        }
    }
    
    int count = 0;
    for (int i = 0; i <= sz-1; i++) {
        if (v[i] == minVal) {
            count++;
        }
    }
    if (count%2 == 1) {
        cout << "Lucky" << endl;
    } else {
        cout << "Unlucky" << endl;
    }
}