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
#include <utility>
#include <iomanip>

using namespace std;

int main() {
    //below is done for fast input and output
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long a,b,c,d;
    if (!(cin>>a>>b>>c>>d)) return 0;
    a%=10;
    b%=10;
    c%=10;
    d%=10;

    long long product = (a*b)%10;
    product = (product*c)%10;
    product = (product*10)%10;

    if (product == 0){
        cout << 0 << endl;
    }
//setw(int n) - means set width allocates a box of n characters for the piece of data we print - temporary, doesn't work after you have printed
//setfill(char c) - replaces default blank padding space with custom character - permanent, stays for the rest of the program
    cout << product << endl;
}