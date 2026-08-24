#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <map>
#include <unordered_map>
#include <queue>
#include <set>
#include <cmath>

using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long y;
    if(!(cin >> y)) return 0;

    vector <int> digits;
    while (y>0) {
        y=y%10;
        digits.push_back(y);
        y=y/10;
    }

    long long newNum = y+1;
    vector <int> newDigits;
    while (newNum>0) {
        newNum=newNum%10;
        newDigits.push_back(newNum);
        newNum=newNum/10;
    }

    for (int x: digits) {
        for (int y: newDigits) {
            if (x==y) {
                newNum+=1;
            } else if (x!=y) {
                for (int z: newDigits) {
                    int newnumber = newNum*10 + z;
                }
            }
        }
        cout << newnumber << endl;
        return 0;
    }






}