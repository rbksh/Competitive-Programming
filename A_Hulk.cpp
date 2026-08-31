#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string s1 = "I hate";
    string s2 = "I love";
    string s3 = "that";
    string s4 = "it";

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            cout << s1;
        } else {
            cout << s2;
        }
        if (i < n) {
            cout << " " << s3 << " ";
        }
    }
    cout << " " << s4 << endl;
}