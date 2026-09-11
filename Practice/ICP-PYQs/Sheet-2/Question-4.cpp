#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a;
    cin >> b;
    
    int count = 0;
    
    for (int i = a; i <= b; i++) {
        int count2 = 0; 
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                count2++;
            }
        }
        if (count2 == 2) {
            count++;
        }
    }
    cout << count << endl;
    
    return 0;
}