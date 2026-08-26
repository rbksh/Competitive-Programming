#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
using namespace std;

int implementBinarySearch(vector <int> v,int target_val) {
    sort(v.begin(),v.end()); //the array given will be sorted already 
    int size = v.size()-1;
    int l = 0;
    while (l<=size) {
        int mid = l + ((size - l) / 2);
        if (v[mid] == target_val) {
            return mid;
        }
        if (v[mid] < target_val) {
            mid+=1;
        }
        if (v[mid] > target_val) {
            mid-=1;
        }
    }

}


int main() {
    int num;
    cin >> num;
    vector <int> v;
    int n;
    cin >> n;
    for (int i = 0; i<= n; i++) {
        int p;
        cin >> p;
        v.push_back(p);
    }
    implementBinarySearch(v,num);
}