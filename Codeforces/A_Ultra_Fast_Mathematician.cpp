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

// int main () {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     long long a;
//     long long b;
//     cin >> a;
//     cin >> b;

//     vector <int> digits1;
//     vector <int> digits2;
//     vector <int> digits3;

//     string str1 = to_string(a);
//     string str2 = to_string(b);

//     int n1 = str1.length();
//     int n2= str2.length();

//     while (n1>=0) {
//         a=a%10;
//         digits1.emplace_back(a);
//         a=a/10;
//     }
//     while (n2>=0){
//         b=b%10;
//         digits2.emplace_back(b);
//         b=b/10;
//     }


//     int size = digits1.size();

//     for (int i = 0; i<= size-1; i++ ) {
//         if (digits1[i] == digits2[i]) {
//             digits3.push_back(0);
//         } else if (digits1[i]!=digits2[i]) {
//             digits3.push_back(1);
//         }
//     }

//     for (int i = 0; i<=size-1;i++) {
//         cout << digits3[i];
//     }

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

    string str1,str2;
    if(!(cin >> str1 >> str2)) return 0;

    string finalNum = "";

    for (size_t i = 0; i<str1.length();i++) {
        if (str1[i]==str2[i]){
            finalNum+="0";
        } else if (str1[i]!=str2[i]){
            finalNum+="1";
        }
    }

    cout << finalNum << endl;

    return 0;





}