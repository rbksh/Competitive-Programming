#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> numbers;
    int evenCount = 0;
    int oddCount = 0;
    int positive = 0;
    int negative = 0;

    while (n--) {
        int number;
        cin >> number;
        numbers.push_back(number);
    }

    int sz = numbers.size();
    for (int i = 0; i <= sz-1; i++) {
        if (numbers[i]%2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    for (int i = 0; i <= sz-1; i++) {
        if (numbers[i] > 0) {
            positive++;
        } else if (numbers[i] < 0) {
            negative++;
        }
    }

    cout << "Even: " << evenCount << endl << "Odd: " << oddCount << endl << "Positive: " << positive << endl << "Negative: " << negative << endl;


    return 0;
}