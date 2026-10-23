#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    if(!(cin >> s)) return 0; //to decrease the execution time of I/O operations

    vector<char> num;
    for (char c : s) {
        if (c!='+') {
            num.push_back(c); //pushing back/adding each number of that entered string into dynamic sized array
        }
    }

    sort(num.begin(),num.end()); //sorting in non-descending order according to the given constraints

    for (int i=0;i < num.size();i++) {
        cout << num[i]; //print the sorted numbers
        if (i < num.size()-1) { //print + sign after every number
            cout << "+";
        }
    }
    cout << "\n"; //just for fun
    return 0;
}