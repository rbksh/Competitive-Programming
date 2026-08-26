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
        for (int j =1 ; j<=a-i+1;j++) {
            cout << "*";
        }
    }
    cout << endl;
}

//Pattern 6 - 12345,1234,123,12 and so on 
void printPattern6(int b) {
    for (int i = 1; i<=b;i++) {
        for (int j = 1; j<=b-i+1;j++) {
            cout << j << endl;
        }
    }
    cout << endl;
}

//another possibility of pattern 5 - 55555,4444,333,22,1 
void printExtraPattern(int c) {
    for (int i = 1; i<=c; i++) {
        for (int j = 1; j<=c-i+1;j++) {
            cout << i << endl;
        }
    }
    cout << endl;
}

//Pattern 7 - pascal's triangle using stars lmao
void printPattern7(int d) {
    for (int i = 0; i<=d;i++) {
        for (int j = 0; j<=n-i-i;j++) {
            cout << " ";
        }
        for (int j = 0; j<=2*i+1; j++) {
            cout << "*";
        }
        for (int j = 0; j<=n-i-1;j++) {
            cout << " ";
        }
    }
    cout << endl;

}

//Pattern 8 - inverted pascal's triangle using stars lmao 
void printPattern8(int e) {
    for (int i = 0; i<=e, i++) {
        for (int j = 0; j<i; j++) {
            cout << " ";
        }
        for (int j = 0; j<=2n-(2i+1);j++) {
            cout << "*";
        }
        for (int j = 0; j<i,j++) {
            cout << " ";
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
    
    int b;
    cin >> b;
    printPattern6(b);
    
    int c;
    cin >> c;
    printExtraPattern(c);
    
    int d;
    cin >> d;
    printPattern7(d);
    
    int e;
    cin >> e;
    printPattern8(e);
    
}

//warning: when using another function to print the pattern and declaring it in the main function, make sure that you take the input in the main function only, not in the other function(void or int or whatrver). 