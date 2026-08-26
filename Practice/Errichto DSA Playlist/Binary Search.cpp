#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
using namespace std;

int implementBinarySearch(vector <int> v,int target_val) { //we have to check that if the given target value exists in the array or not
    sort(v.begin(),v.end()); //the array given will be sorted already 
    int size = v.size()-1;
    int l = 0; //since we are finding the middle element, how does binaruy search work when the number of elements are even?
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


//to check if a given value x is a square of any real number or not
int checkSquare(vector <int> v1, int x) {
    sort(v1.begin(),v1.end());
    int size = v1.size()-1;
    int l = 0;
    while (l<=size) {
        int mid = l + ((size-l)/2);
        if (v1[mid] == 0 || v1[mid] == 1) {
            return true;
        }
        if (v1[mid] == x) {
            return mid;
        }
        if (v1[mid] > x) {
            mid+=1;
        }
        if (v1[mid] < x){
            mid-=1;
        }
    }
}

//to find smalles value >=x in the array, x is a number given by the user 

int checkForX(vector <int> v2, int a) {
    int ans = -1;
    int l = 0;
    int r = v2.size()-1;
    int mid = l + ((r-l)/2);
    if (v2[mid] >= a) {
        ans = mid;
        r=mid-1;
    } else {
        l = mid +1;
    }
    return ans;
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


    int sqr;
    cin >> sqr;
    vector <int> v1;
    for (int i = 0; i<=sqr; i++) {
        v1.push_back(i);
    }

    bool isSquare = false;

    if (checkSquare(v1,sqr)*checkSquare(v1,sqr) == sqr) {
        isSquare = true;  
    }


//time complexity of binary search is O(logn), why?
//lets say we have an array of N elements, and everytime binary search works, it divides the array into sub-arrays, which mostly contain half of the elements of the original arrays
//lets say the number of times it is implment it k times, so elements in the kth sub-array will by N/(2^k)
// taking log both sides, it will work till the number of elements eventually end up to be 1, to find the target value
//so n/(2^k) == 1, log both sides gives us log n = klog 2, so logn/log2 = k, so k = logn with base 2. which is the number of steps required to complete binary search



    return 0;


    
}