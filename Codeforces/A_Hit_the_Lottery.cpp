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

//     long long n;
//     if (!(cin >> n)) return 0;

//     // vector <int> digits;

//     // while (n>0) {
//     //     n=n%10;
//     //     digits.push_back(n);
//     //     n=n/10;
//     // }

//     long long hundreds = (n/100) * 100;
//     long long tens = ((n/10)%10)*10;
//     long long ones = n%10;

//     long long hund = hundreds/100;
//     long long ten = tens/10;;
//     long long one = ones/1; 

//     long long total = hund + ten + one; 

//     cout << total << endl;


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

    long long n;
    cin >> n;

    int count = 0;

    count = count + n/100;
    n=n%100;

    count = count + n/20;
    n=n%20;

    count = count + n/10;
    n=n%10;

    count = count + n/5;
    n=n%5;

    count = count + n;

    cout << count << endl;




}