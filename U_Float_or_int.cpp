#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <map>
#include <unordered_map>
#include <queue>
#include <set>

using namespace std;

int main() {
    string n;
    cin >> n;
    int a = stoi(n);
    float b = stof(n);

    if (stoi(n) == a) {
        cout << "int" << endl;
    } else if (stof(n) == b) {
        cout << "float" << endl;
    }
    return 0;
}