#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int p;
    cin >> p;
    vector<int> a(p);
    for (int i = 0; i < p; i++) {
        cin >> a[i];
    }

    int q;
    cin >> q;
    vector<int> b(q);
    for (int i = 0; i < q; i++) {
        cin >> b[i];
    }

    a.insert(a.end(), b.begin(), b.end());

    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());

    if (a.size() == n) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}