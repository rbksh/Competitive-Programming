#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <numeric>
#include <utility>
/*optional libraries
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <queue>
*/
using namespace std;

int gcdManual(int a, int b) {
    if (a == 0 && b == 0){
        return 0;
    }

    while (b != 0) {
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num1,num2;
    cin >> num1 >> num2;
    cout << gcdManual(num1,num2) << endl;
    
}