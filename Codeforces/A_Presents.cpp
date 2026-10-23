#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; 
    cin >> n;
    
    vector <int> givenGifts(n + 1);

    for (int i = 1; i <= n; i++) {
        int p; 
        cin >> p;
        givenGifts[p] = i;
    }

    for (int i = 1; i <= n; i++) {
        cout << givenGifts[i] << " ";
    }

    return 0;
}