#include <bits/stdc++.h>
using namespace std;
//implementing data-branching analogy to understand O(2^n) complexity
int countdataBranches(int n) {
    if (n==0) {
        return 1;
    }
    return countdataBranches(n-1) + countdataBranches(n-1);
}

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
    //implementing data-branching analogy to understand O(2^n) complexity
    int datasize=3;
    int totalSteps = countdataBranches(datasize);
    cout << totalSteps << endl;

    //implementing data-branching analogy to understand O(n) complexity
    int n=100;
    int STEPS = 0;
    for (int i=0;i<n;i++) {
        STEPS+=1;
    }
    cout << STEPS << endl;
    return 0;

    //implementing data-branching analogy to understand O(n^2) complexity
    int N=100;
    int STEPS2 = 0;
    for (int i=0;i<N;i++) {
        for (int j=0;j<N;j++) {
            STEPS2+=1;
        }
    }
    cout << STEPS2 << endl;
    
}