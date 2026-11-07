#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n; 
        cin >> n;
        
        vector<int> roundNumbers;
        int temp = n;
        int power = 1;
        
        while (temp > 0) {
            int digit = temp % 10;
            if (digit != 0) {
                roundNumbers.push_back(digit * power);
            }
            temp = temp / 10;
            power *= 10;
        }
        
        cout << roundNumbers.size() << "\n";
        for (int i = roundNumbers.size() - 1; i >= 0; i--) {
            cout << roundNumbers[i] << (i == 0 ? "" : " ");
        }
        cout << "\n";
    }
    return 0;
}