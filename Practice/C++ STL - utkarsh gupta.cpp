#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif
//implementing phone-book analogy to understand O(log n) complexity
    int items = 1000;
    int steps = 0;
    while (items>1) {
        items=items/2;
        steps+=1;
    }
    cout << steps << endl;
    
}