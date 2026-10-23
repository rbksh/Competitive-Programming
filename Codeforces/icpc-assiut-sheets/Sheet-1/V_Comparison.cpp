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
    int a,b;
    char s;
    cin >> a >> s >> b;
    if (a>=-100 && b>=-100 && a<=100 && b<=100) {
        if (s=='>'|| s=='<' || s=='=') {
            if (a>b && s=='>') {
                cout << "Right" << endl;
            } else if (a>b && s=='<'){
                cout << "Wrong" << endl;
            } else if (a<b && s=='<') {
                cout << "Right" << endl;
            } else if (a<b && s=='>') {
                cout << "Wrong" << endl;
            } else if (a==b && s=='=') {
                cout << "Right" << endl;
            } else if (a!=b && s=='=') {
                cout << "Wrong" << endl;
            } else {
                cout << "Wrong" << endl;
            }
        }
    }
    return 0;
}