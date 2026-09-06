#include <iostream>
#include <iomanip>
#include <algorithm>
#include <utility>
#include <string>
#include <vector>
#include <map>
#include <cmath>
#include <set>
using namespace std;

//there are 2 methods
//1. use the standard rotate function, which is part of the algorithm library in cpp
//2. use a highly optimized array reveral algorithm



void reverseArray(vector <int> v, int k) {
    int N = v.size();
    rotate(v.begin(),v.begin() + (N-k), v.end()); //rotate k times to the right
    rotate(v.begin(),v.begin() + k, v.end());
}

//method 1 - using rotate function

void reverseArrayMethod1(vector <int> v1, int k1) {
    int size = v1.size();
    if (k == 0 || k == size) {
        cout << v1; 
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector <int> v; 
    int size = v.size();
    for (int i = 0; i <= size - 1; i++) {
        cin >> v[i];
    }

    int k;
    cin >> k;
    if (size == 0 || k == 0 || k == size) {
        for (int i = 0; i <= size-1; i++){
            cout << v[i] << " ";
        }
    }

    if (k > size) {
        k = k%size;
    }
    // right rotation k times
    rotate(v.begin(),v.begin() + (size-k),v.end());

    //left rotation k times
    rotate(v.begin(),v.begin() + k, v.end());






}