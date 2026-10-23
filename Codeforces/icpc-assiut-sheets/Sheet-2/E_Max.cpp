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

    while (n--) {
        int number;
        cin >> number;
        numbers.push_back(number);
    }

    int max = numbers[0];
    int sz = numbers.size();

    for (int i = 0; i <= sz-1; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    cout << max << endl;
    return 0;
}