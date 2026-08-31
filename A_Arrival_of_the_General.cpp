// #include <iostream>
// #include <vector>
// #include <string>
// #include <algorithm>
// #include <iomanip>
// #include <cmath>
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;
//     vector <int> heights;
//     while (n--) {
//         int a;
//         cin >> a;
//         heights.push_back(a);
//     }

//     int minVal = 0;
//     int maxVal = 0;
//     int minIndex = 0;
//     int maxIndex = 0;

//     for (size_t i = 0; i <= heights.size()-1; i++) {
//         if (heights[i]<minVal) {
//             minVal = heights[i];
//             minIndex = i;
//         }

//         if (heights[i] > maxVal) {
//             maxVal = heights[i];
//             maxIndex = i;
//         }
//     }

//     int time1 = maxIndex - 0;
//     int time2 = heights.size() - minIndex;

//     int total = time1 + time2;

//     cout << total << endl;
//     return 0;
// }

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector <int> heights;
    while (n--) {
        int a;
        cin >> a;
        heights.push_back(a);
    }

    int minVal = heights[0];
    int maxVal = heights[0];
    int minIndex = 0;
    int maxIndex = 0;

    for (size_t i = 0; i <= heights.size()-1; i++) {
        if (heights[i] <= minVal) {
            minVal = heights[i];
            minIndex = i;
        }

        if (heights[i] > maxVal) {
            maxVal = heights[i];
            maxIndex = i;
        }
    }

    int time1 = maxIndex - 0;
    int time2 = (heights.size() - 1) - minIndex;

    int total = time1 + time2;
    if (maxIndex > minIndex) {
        total--;
    }

    cout << total << endl;
    return 0;
}