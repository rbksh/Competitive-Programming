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

int main () {
    long long n;
    cin >> n;
    
    long long years = n/365;
     n=n%365;

    long long months = n/30;
    long long days = n%30;

    cout << years << " years" << endl;
    cout << months << " months" << endl;
    cout << days << " days" << endl;

    return 0;
}