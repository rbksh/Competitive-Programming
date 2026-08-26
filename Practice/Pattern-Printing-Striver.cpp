#include <bits/stdc++.h>
using namespace std;

//Pattern 1 - lines with constant number of stars in it

void printPattern1(int n) {
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<n;j++) {
            cout << "*";
        }
        cout << endl;
    }
}

//another method for patters, can be given using test case, use the follopwing in that 
// int t;
// cin >> t;
// while (t--) {
//     loops go here.
// }


//Pattern 2 - normal star triangle
void printPattern2(int x) {
    for (int i = 0; i<x; i++) {
        for (int j = 0; j<=i; j++) {
            cout << "*";
        }
    }
    cout << endl;
}

//Pattern 3 - 1,12,123 and so on
void printPattern3(int y) {
    for (int i = 1; i<y; i++) {
        for (int j = 1; j<=i; j++) {
            cout << j << " ";
        }
    }
    cout << endl;
}

//Pattern 4 - 1,22,333 and so on

void printPattern4(int z) {
    for (int i = 1; i<z; i++) {
        for (int j = 1; j<=i;j++) {
            cout << i << " ";
        }
    }
    cout << endl;
}

//Pattern 5 - Inverted star triangle
void printPattern5(int a) {
    for (int i =1; i<=a;i++) {
        for (int j =1 ; j<=n-i+1;j++) {
            cout << "*";
        }
    }
    cout << endl;
}

//Pattern 7 - 12345,1234,123,12 and so on 
void printPattern5(int b) {
    for (int i = 1; i<=b;i++) {
        for (int j = 1; j<=n-i+1;j++) {
            cout << j << endl;
        }
    }
    cout << endl;
}

//another possibility of pattern 5 - 55555,4444,333,22,1 
void printExtraPattern(int c) {
    for (int i = 1; i<=c; i++) {
        for (int j = 1; j<=n-i+1;j++) {
            cout << i << endl;
        }
    }
    cout << endl;
}


int main() {
    int n;
    cin >> n;
    printPattern1(n);
    
    int x;
    cin >> x;
    printPattern2(x);
    
    int y;
    cin >> y;;
    printPattern3(y);
    
    int z;
    cin >> z;
    printPattern4(z);
    
    int a;
    cin >> a;
    printPattern5(a);
    
}

//warning: when using another function to print the pattern and declaring it in the main function, make sure that you take the input in the main function only, not in the other function(void or int or whatrver). 