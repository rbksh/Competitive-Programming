#include <bits/stdc++.h>

using namespace std;


void playBottoGame(const string& p1_name, const vector<int>& p1_troops, const string& p2_name, const vector<int>& p2_troops) {
    if (p1_troops.size() != p2_troops.size()) {
        cout << "error";
        return;
    }

    double p1_score = 0.0;
    double p2_score = 0.0;
    long long num_castles = p1_troops.size();

    for (size_t i = 0; i < num_castles; i++) {
        int t1 = p1_troops[i];
        int t2 = p2_troops[i];
        string result;

        if (t1 > t2) {
            p1_score += 1.0;
            result = p1_name + " wins";
        } else if (t1 < t2) {
            p2_score += 1.0;
            result = p2_name + " wins";
        } else {
            p1_score += 0.5;
            p2_score += 0.5;
            result = "Tie";
        }
        cout << "Castle" << (i+1) << 
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);



   return 0;
}