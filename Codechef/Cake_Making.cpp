#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    int total_cakes = 0;
    // int iterations = 100;
    if (a>=1 && b>=1 && a<=100 && b<=100) {
        for (int i=1;i<=a;i++) {
            for (int j=1;j<=b;j++) {
                if (i!=j){
                    total_cakes++;
                }
            }
        }
    }
    cout << total_cakes << endl;
    return 0;
}

//nested loops used to account for all possible combinations, here, for a certain test case, we keep i fixed, and take all possible combinations of that particular value of i with all possible values of j, and repeat the same until the limit exceeds.
//good question to implement pnc concepts lmao.