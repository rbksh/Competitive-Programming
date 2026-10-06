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
    float x,y;
    cin >> x >> y;
    if (x>=-1000 && y>=-1000 && x<=1000 && y<=1000) {
        if (x>0 && y>0) {
            cout << "Q1" << endl;
        } else if (x<0 && y>0) {
            cout << "Q2" << endl;
        } else if (x<0 && y<0) {
            cout << "Q3" << endl;
        } else if (x>0 && y<0) {
            cout << "Q4" << endl;
        }
        if (x==0&&y==0) {
            cout << "Origem" << endl;
        } else if (y==0) {
            cout << "Eixo X" << endl;
        } else if (x==0) {
            cout << "Eixo Y" << endl;
        }
    }
    return 0;
}