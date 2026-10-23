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
#include <iomanip>

using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector <long long> colors;

    long long s1,s2,s3,s4;
    if(!(cin >> s1 >> s2 >> s3 >> s4)) return 0;
    colors.push_back(s1);
    colors.push_back(s2);
    colors.push_back(s3);
    colors.push_back(s4);

    long long size = colors.size();
    long long NeedToBuy = 0;

    sort(colors.begin(),colors.end());
    
    for(int i = 1; i<=size-1;i++) {
        if (colors[i] == colors[i-1]){
            NeedToBuy++;
        }
    }

    cout << NeedToBuy << endl;

    return 0;



}