#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <numeric>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <queue>
#include <utility>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        long long n; cin >> n;
        long long temp = n;
        vector <long long> binary;
        while (temp > 0) {
            long long remainder = temp%2;
            binary.push_back(remainder);
            temp = temp/2;
        }
        // int left = 0;
        // int right = binary.size()-1;
        // // while (left < right) {
        // //     int tempo = binary[left];
        // //     binary[left] = binary[right];
        // //     binary[right] = tempo;
        // //     right--;
        // //     left++;
        // // }

        // vector <int> oneCount;
        int count = 0;
        for (int i = 0; i < binary.size(); i++) {
            if (binary[i] == 1) {
               count++;
            }
        }
        int final = pow(2,count) - 1;
        // for (int i = 0; i < oneCount.size(); i++) {
        //     count += oneCount[i] * pow(10,i);
        // }
        cout << final << endl;
    }
    return 0;
    
}