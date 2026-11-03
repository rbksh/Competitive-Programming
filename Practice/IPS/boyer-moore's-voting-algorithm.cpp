#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;

    vector <int> numbers; 
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    int count = 0;
    int candidate = numbers[0];
    for (int i = 1; i < n; i++) {
        if (count == 0) {
            candidate = numbers[i];
        } else if (candidate == numbers[i]) {
            count++;
        } else {
            count--;
        }
    }

    int frequency = 0;
    int len = numbers.length()/2;
    for (int i = 0; i < n; i++) {
        if (numbers[i] == candidate) {
            frequency++;
        }
    }

    if (frequency > len) {
        cout << frequency << endl;
    } else {
        cout << -1 << endl;
    }

   return 0;
}