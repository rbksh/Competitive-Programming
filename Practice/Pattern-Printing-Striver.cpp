#include <bits/stdc++.h>
using namespace std;


void printPattern(int n) {
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<n;j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    printPattern(n);
    
}

//warning: when using another function to print the pattern and declaring it in the main function, make sure that you take the input in the main function only, not in the other function(void or int or whatrver). 