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

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Demonstration code
    vector<int> v(10, 104); // Note: 'h' evaluates to ASCII 104 in an int vector
    cout << v[0] << endl;

    long long t;
    if(!(cin >> t)) return 0;
    while (t--) {
        //solution goes here
    }


    //vector - dynamic sized array(meaning the length of that array can be altered or the elements inside it can be changed or removed.)
    vector <int> v(10,'h'); //empty vector of integers
    cout << v[0] << endl;

}