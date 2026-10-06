#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int count_M = 0;
    int count_C = 0;

    while (n--) {
        int m,c;
        cin >> m >> c;
        if (m > c) {
            count_M++;
        } else if (m < c) {
            count_C++;
        }
    }

    if (count_M > count_C) {
        cout << "Mishka" << endl;
    } else if (count_M < count_C) {
        cout << "Chris" << endl;
    } else if (count_M == count_C) {
        cout << "Friendship is magic!^^" << endl;
    } 
    return 0;
}