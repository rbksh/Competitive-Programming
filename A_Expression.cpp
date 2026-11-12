#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <numeric>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <queue>
#include <utility>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b,c; cin >> a >> b >> c;
    vector <int> operationResults;
    int allSum = a+b+c; operationResults.push_back(allSum);
    int allProduct = a*b*c; operationResults.push_back(allProduct);
    int oneSumA = a*(b+c); operationResults.push_back(oneSumA);
    int oneSumB = (a+b)*c; operationResults.push_back(oneSumB);

    int maxValue = operationResults[0];
    for (int i = 0; i < operationResults.size(); i++) {
        if (operationResults[i] > maxValue) {
            maxValue = operationResults[i];
        }
    }
    cout << maxValue << endl;
    return 0;
    
}