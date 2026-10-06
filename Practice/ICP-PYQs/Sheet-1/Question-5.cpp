#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> digits;
    
    while (n > 0) {
        int digit = n%10;
        digits.push_back(digit);
        n=n/10;
    }
    
    int oddSum = 0;
    int evenSum = 0;
    
    int sz = digits.size();
    for (int i = 0; i <= sz-1; i++) {
        if (i%2 == 0) {
            evenSum+=digits[i];
        } else if (i%2 == 1) {
            oddSum+=digits[i];
        }
    }
    cout << "Sum of Odd Index Digit " << evenSum << endl;
    cout << "Sum of Even Index Digit " << oddSum << endl;
    
}