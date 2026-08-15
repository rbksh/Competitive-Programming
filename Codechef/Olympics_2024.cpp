#include <bits/stdc++.h>
using namespace std;

int main() {
    int g,s,b;
    cin >> g >> s >> b;
    int total_medals = 15;
    if (g>=1 && s>=1 && b>=1 && g<=5 && s<=5 && b<=5){
        int current_medals = g+s+b;
        if (current_medals != total_medals) {
            int remaining_medals = total_medals-current_medals;
            cout << remaining_medals << endl;
        }
    }
    return 0;
}