#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <map>
#include <unordered_map>
#include <queue>
#include <set>
#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector <int> responses;
    while (n--) {
        int response;
        cin >> response;
        responses.push_back(response);
    }

    // for(int x: responses) {
    //     if (x == 1) {
    //         cout << "HARD" << endl;
    //         break;
    //     } else {
    //         cout << "EASY" << endl;
    //         break;
    //     }
    // }

    if (find(responses.begin(),responses.end(),1)!=responses.end()) {
        cout << "HARD" << endl;
    } else {
        cout << "EASY" << endl;
    }

    return 0;
}