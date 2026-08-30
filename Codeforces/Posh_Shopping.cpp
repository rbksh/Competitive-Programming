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
#include <iomanip> //what is this library used for?

using namespace std;


//can we implement this problem using binary search?

int ImplementBinarySearch(vector<int> v, int target_val) {
    
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector <int> prices;

    int t;
    if(!(cin >> t)) return 0;


    while (t--) {
        int n;
        cin >> n;
        while (n--) {
            int c;
            cin >> c;
            prices.push_back(c);
        }

    }

    if (int(prices) == str(prices)) {
        cout << "no same price for the same time" << endl; 
    }


    int day;
    switch(day) {
        case 1:
        cout << "monday";
        break;

        case 2:
        cout << "tuesday";
        break;

        case 3:
        cout << "wednesday";
        break;

        case 4:
        cout << "thursday";
        break;

        case 5: 
        cout << "friday";
        break;

        case 6:
        cout << "saturday";
        break;

        case 7:
        cout << "sunday";
        break;

        default:
        cout << "none";
        
    }

    // sort(prices.begin(),prices.end());

    for (int i = 0; i<= prices.size()-1; i++) {
        for (int j = 0; j<=prices.size()-1; j++) {
            if (prices[i]>=prices[j]) {
                cout << prices[i] << endl;
            } else if (prices[i]<=prices[j]) {
                cout << prices[j] + prices[i] << endl;
            }
        }
    }

    vector <int> prices; 


    prices.push_back(v[i]);






    vector<int> v; 
    int a;
    cin >> a;
    while (a--) {
        int p;
        cin >> p;
        v.push_back(p);
    }

    for (int i = 0; i<=v.size()-1;i++) {
        if (v[i] == v[i+1]) {
            cout << "same" << endl;
        } else {
            cout << "not same" << endl;
        }
    }

    return 0;


}