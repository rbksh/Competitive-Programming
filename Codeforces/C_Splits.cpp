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

    long long n;
    cin >> n;
    vector <int> splits(n,'1');
    vector <int> splits2(n+2); //this is basically paritions. 
    // if(!(cin >> n)) return 0;

    for (int i = 0; i <= splits.size()-1; i++) {
        cin >> splits[i];
        if (i != splits.end()) {
            
        }
    }





}