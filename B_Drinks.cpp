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

//     float n;
//     if(!(cin >> n)) return 0;

//     vector <float> portionSize;

//     while (n--) {
//         float p;
//         cin >> p;
//         portionSize.push_back(p);
//     }

//     float finalSize1;
//     float finalSize;
//     float initialSize = n;
//     float size = portionSize.size();

//     for (float i = 0; i< size-1; i++ ) {
//         finalSize1 = portionSize[i]/100;
//         finalSize+=finalSize1;
//     }

//     float percentage = (finalSize/initialSize) * 0.0001;

//     cout << percentage << endl;

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
#include <iomanip>

using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double n;
    if(!(cin >> n)) return 0;

    vector <double> portionSize;
    double initialSize = n;

    while (n--) {
        double p;
        cin >> p;
        portionSize.push_back(p);
    }

    double finalSize1;
    double finalSize = 0;
    double size = portionSize.size();

    for (double i = 0; i < size; i++ ) {
        finalSize1 = portionSize[i];
        finalSize+=finalSize1;
    }

    double percentage = (finalSize/initialSize);

    cout << fixed << setprecision(12) << percentage << endl;

    return 0;




}

