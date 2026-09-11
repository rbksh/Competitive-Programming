// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int t;
// 	cin >> t;
// 	while (t--) {
// 	    int n;
// 	    cin >> n;
// 	    vector <int> digits;
	    
// 	    while (n > 0) {
// 	        int digit = n%10;
// 	        digits.push_back(digit);
// 	        n=n/10;
// 	    }
// 	    cout << digits[0] << " " << digits.back() <<endl;
// 	}

// }

//2nd method - without using vector, and using while loop
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        int last_digit = n%10;
        int firstDigit = n;
        
        while (firstDigit >= 10) {
            firstDigit = firstDigit/10;
        }
        cout << firstDigit << " " << last_digit << endl;
    }
}
