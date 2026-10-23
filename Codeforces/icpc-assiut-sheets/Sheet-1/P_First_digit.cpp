#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <map>
#include <unordered_map>
#include <queue>
#include <set>

using namespace std;

int main() {
    int x;
    cin >> x;
    if (x>999 && x<=9999) {
        int og_x = x;
        while (x>=10) {
            x/=10;
        }
        if (x==1) {
            cout << "ODD" << endl;
        }else if (x%2==0) {
            cout << "EVEN" << endl;
        } else {
            cout << "ODD" << endl;
        }
    }
}