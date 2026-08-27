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

    string s;
    if(!(cin >> s)) return 0;

    vector <string> st;

    sort(s.begin(),s.end());
    for (bool next = true; next; next = next_permutation(s.begin(),s.end())) {
        st.push_back(s);
    }

    int size = st.size();

    for (int i = 0; i<=size-1;i++) {
        for (int j = 0; j<=i; j++) {
            if (int(st[i][j] > st[i][j+1])) {
                cout << st[i] << endl;
            } else {
                cout << st[i+1] << endl;
            }
        }
    }




}