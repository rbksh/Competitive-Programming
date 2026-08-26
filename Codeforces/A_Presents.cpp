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

    int n;
    if(!(cin >> n)) return 0;

    vector <int> friends;

    while (n--) {
        int p;
        cin >> p;
        friends.push_back(p);
    }

    sort(friends.begin(),friends.end());
    int size = friends.size();

    vector <int> receivers;

    for (int i = 0; i<=size-1;i++) {
        if ((i+1) == friends[i]) {
            receivers.push_back(friends[i]);
        } else if ((i+1)!=friends[i]) {
            if (friends[i] == friends[i+1]) {
                receivers.push_back(friends[i+1]);
            }
        }
    }

    int sz = receivers.size();

    for (int i = 0; i<=sz-1;i++) {
        cout << receivers[i];
    }

    return 0;
}