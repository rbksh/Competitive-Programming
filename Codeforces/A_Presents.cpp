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
    vector <int> receivers;
    vector <int> indexes;
     
    while (n--) {
        int p;
        cin >> p;
        receivers.push_back(p);
    }

    int randomInt;

    int size = receivers.size();
    for (int i =1; i<=size-1; i++) {
        for (int j = 0; j<=size-1; j++) {
            if (i == receivers[j]) {
                randomInt =j+1;
                indexes.push_back(randomInt);
                break;
            }
        }
    }

    int sz = indexes.size();

    for (int k = 0; k<=sz-1;k++ ) {
        cout << indexes[k] << " ";
    }

    return 0;


}