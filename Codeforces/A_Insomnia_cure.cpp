#include <iostream>
#include <iomanip>
#include <algorithm>
#include <utility>
#include <string>
#include <vector>
#include <map>
#include <cmath>
#include <set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k,l,m,n,d;
    cin >> k;
    cin >> l;
    cin >> m;
    cin >> n;
    cin >> d;

    vector <int> dragons;

    for (int i = 1; i <= d; i++) {
        int a = 1;
        dragons.push_back(a);
        a++;
    }

    if (k == 1) {
        cout << d << endl;
    }
    








}