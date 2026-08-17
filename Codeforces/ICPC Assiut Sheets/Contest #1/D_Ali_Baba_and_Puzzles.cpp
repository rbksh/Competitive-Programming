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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long a,b,c,d;
    if(!(cin >> a >> b >> c >> d)) return 0;

    long long r1=a+b-c;
    long long r2=a-b+c;
    long long r3=a+b*c;
    long long r4=a*b+c;
    long long r5=a-b*c;
    long long r6=a*b-c;
    if (r1==d || r2==d || r3==d || r4==d || r5==d || r6==d) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;

}