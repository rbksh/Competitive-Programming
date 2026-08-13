#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> scores(n);
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }

    int cutoff_score = scores[k - 1];
    int advancers = 0;

    for (int i = 0; i < n; i++) {
        if (scores[i] >= cutoff_score && scores[i] > 0) {
            advancers++;
        }
    }

    cout << advancers << "\n";

    return 0;
}