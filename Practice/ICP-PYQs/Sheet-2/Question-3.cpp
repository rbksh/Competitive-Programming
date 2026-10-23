#include <bits/stdc++.h>
using namespace std;

int main() {
    int price;
    cin >> price;
    
    if (price >= 100 && price <= 500) {
        cout << "Cashback amount for this product is 20" << endl;
    } else if (price >= 501 && price <= 1000) {
        cout << "Cashback amount for this product is 50" << endl;
    } else if (price >= 1001 && price <= 2000) {
        cout << "Cashback amount for this product is 100" << endl;
    } else if (price >= 2001 && price <= 5000) {
        cout << "Cashback amount for this product is 200" << endl;
    } else if (price >= 5000) {
        cout << "Cashback amount for this product is 500" << endl;
    } else {
        cout << "No cashback on this product" << endl;
    }
}
