#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif

    int n,m;
    cin >> n >> m;
    int total_treats = 0;
    if (m>=0 && n>=0 && m<=100 && n<=100) {
        int x,y;
        cin >> x >> y;
        if (x>=0 && y>=0 && x<=1000 && y<=1000) {
            total_treats=(n*x) + (m*y);
            cout << total_treats << endl;
        }
    }
    return 0;
}