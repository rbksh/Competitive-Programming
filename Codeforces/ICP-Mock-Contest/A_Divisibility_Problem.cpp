// #include <iostream>
// #include <vector>
// #include <string>
// #include <algorithm>
// #include <numeric>
// #include <map>
// #include <unordered_map>
// #include <queue>
// #include <set>
// #include <cmath>
// #include <iomanip>

// using namespace std;



// int checkDivisible(int a ,int b) {
//     int moves = 0;
//     if (a%b == 0) {
//         cout << 0 << endl;
//     } else {
//         if (a>b) {
//             for (int i = a; i>=a; i++) {
//                 if (i%b == 0) {
//                     moves+=1;
//                 }
//             }
//         } else if (a<b) {
//             for (int i = a; i<=b; i++) {
//                 if (i%b == 0) {
//                     moves+=1;
//                 }
//             }
//         }
//     }
//     cout << moves << endl;
// }

// int main () {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     if(!(cin >> t)) return 0;

//     while (t--) {
//         checkDivisible(a,b);
//     }

//     // int moves = 0;

//     // while (t--){
//     //     long long a,b;
//     //     cin >> a >> b;

//     //     if (a%b == 0) {
//     //         cout << 0 << endl;
//     //     } else {
//     //         for (int i =a; i<b; i++) {
//     //             if (i%b==0) {
//     //                 moves+=1;
//     //                 cout << moves << endl;
//     //             }
//     //         }
//     //     }
//     // }
//     // cout << moves << endl;
//     // return 0;

// }



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

void checkDivisible(long long a, long long b) {
    if (a % b == 0) {
        cout << 0 << endl;
    } else {
        long long remainder = a % b;
        long long moves = b - remainder;
        cout << moves << endl;
    }
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if(!(cin >> t)) return 0;

    while (t--) {
        long long a, b;
        cin >> a >> b;
        checkDivisible(a, b);
    }

    return 0;
}
