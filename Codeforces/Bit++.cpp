#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
#endif
    int x = 0; //given in the question, that initial value of x is 0. 
    int n;
    cin >> n;

    if (n < 1 || n > 150) {
        return 0;
    }

    vector<string> statements; //the logic here, that whatever "statements" that the user enters, it gets appended to an array, and we basically run a loop on the elements of that array, and we check every index of every element in that particular array, and according to those, the output is printed. 

    while (n > 0) { //we could have also done while (n--) {}, which would reduce one line in the end which is n--;. 
        string statement;
        cin >> statement;
        statements.push_back(statement);
        n--;
    }

    for (string s : statements) {   //denoting the pre-defined variable statments here as s for ease of use. 
        if (s.length() == 3) {
            if (s[0] == '+' && s[1] == '+' && s[2] == 'X') {
                x++;
            } else if (s[0] == '-' && s[1] == '-' && s[2] == 'X') {
                x--;
            } else if (s[0] == 'X' && s[1] == '+' && s[2] == '+') {
                x++;
            } else if (s[0] == 'X' && s[1] == '-' && s[2] == '-') {
                x--;
            } //all possible use-cases taken. 
        }
    }

    cout << x << "\n";

    return 0;
}