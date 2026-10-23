#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

    int i = 1;
    while (i<=100) {
        cout << i << " ";
        i++;
    }

    int j = 100;
    while (j >= 1) {
        cout << j << " ";
        j--;
    }

    int a,b;
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        if (i%2 == 0) {
            cout << i << " ";
        }
    }

    for (int i = a; i <= b; i++) {
        if (i%2!=0) {
            cout << i << " ";
        }
    }

    int x,n;
    cin >> x >> n;

    for (int i = 1; i <= n; i++) {
        cout << x*i << " ";
    }

}


