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

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if(!(cin >> n)) return 0;
    vector <long long> L(n);

    long long totalSum = 0;
    for (int i=0;i<n;i++) {
        cin >> L[i]; 
        totalSum+=L[i];
    }

    long long minDiff = -1;
    long long leftSum = 0;

    for (int i=0;i<n-1;i++) {
        leftSum+=L[i];
        long long rightSum = totalSum-leftSum;
        long long currentDiff = abs(leftSum-rightSum);
        
        if (minDiff==-1 || currentDiff < minDiff) {
            minDiff=currentDiff;
        }
    }

    cout << minDiff << endl;

    return 0;

}