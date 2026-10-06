#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> arr(n);
    
    for (int i = 0; i <= n; i++) {
        cin >> arr[i];
    }
    
    int maxVal = arr[0];
    int minVal = arr[0];
    
    int sz = arr.size();
    for (int i = 0; i <= sz-1; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    for (int i = 0; i <= sz-1; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    
    int result = maxVal - minVal;
    cout << result << endl;
    
    
}