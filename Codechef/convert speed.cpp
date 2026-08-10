#include <bits/stdc++.h>
using namespace std;

int main() {
    int speed1=36;
    int result = static_cast<int>(std::round(speed1 * 0.277));
    cout << result << endl;

    return 0;
}

//problem faced - answer was coming in decimal when multiplied given speed by 0.2778, output required was to be rounded off, hence learnt a new function.