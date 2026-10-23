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

// using namespace std;

// int main () {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     if(!(cin >> n)) return 0;

//     vector <int> NetPassengers;

//     while (n--) {
//         int a,b;
//         cin >> a >> b;
//         int netPassengers = abs(b-a);
//         NetPassengers.push_back(netPassengers);
//     }

//     int size = NetPassengers.size();
//     int minCapacity = 0;

//     // for (int i = 0; i< size - 1; i++) {
//     //     if (NetPassengers[i] > NetPassengers[i+1]) {
//     //         minCapacity = NetPassengers[i];
//     //     }
//     // }

//     for (int i = 0; i< size -1; i++) {
//         for (int j = 1; j<=i; j++) {
//             if (NetPassengers[i] > NetPassengers[j]) {
//                 minCapacity = NetPassengers[i];
//             } else if (NetPassengers[i] < NetPassengers[j]) {
//                 minCapacity = NetPassengers[j];
//             }
//         }
//     }

//     cout << minCapacity << endl;

//     return 0;


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

using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if(!(cin >> n)) return 0;

    int currentPassengers = 0;
    int minCapacity = 0;

    while (n--) {
        int a,b;
        cin >> a >> b;
        currentPassengers -= a;
        currentPassengers += b;
        if (currentPassengers > minCapacity) {
            minCapacity = currentPassengers;
        }
    }

    cout << minCapacity << endl;

    return 0;
}
