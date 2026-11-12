#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        vector<int> heights(n);
        for (int i = 0; i < n; i++) {
            cin >> heights[i];
        }
        
        sort(heights.begin(), heights.end());
        
        vector<int> arranged(n);
        int leftIndex = 0;
        int rightIndex = n - 1;
        int maxVisible = 0;
        int index = 0;
        
        while (index < n) {
            int nextIndex = index;
            while (nextIndex < n && heights[nextIndex] == heights[index]) {
                nextIndex++;
            }
            
            int count = nextIndex - index;
            
            arranged[leftIndex] = heights[index];
            leftIndex++;
            
            if (count >= 2) {
                arranged[rightIndex] = heights[index];
                rightIndex--;
                maxVisible += 2;
            } else {
                maxVisible += 1;
            }
            
            for (int k = 2; k < count; k++) {
                arranged[leftIndex] = heights[index];
                leftIndex++;
            }
            
            index = nextIndex;
        }
        
        cout << maxVisible << endl;
        for (int i = 0; i < n; i++) {
            cout << arranged[i];
            if (i < n - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}