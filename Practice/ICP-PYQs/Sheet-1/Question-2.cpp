#include <bits/stdc++.h>
using namespace std;

int main() {
    int zone;
    cin >> zone;
    
    if (zone >= 1 && zone <= 5) {
        cout << "Maximum height possible for building is 30 meters" << endl;
    } else if (zone >= 6 && zone <= 10) {
        cout << "Maximum height possible for building is 25 meters" << endl;
    } else if (zone >= 11 && zone <= 15) {
        cout << "Maximum height possible for building is 20 meters" << endl;
    } else if (zone >= 16 && zone <= 20) {
        cout << "Maximum height possible for building is 10 meters"<< endl;
    } else {
        cout << "Here construction is prohibited" << endl;
    }
}