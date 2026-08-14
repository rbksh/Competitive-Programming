#include <bits/stdc++.h>
using namespace std;


void printName(string name) {
    cout << "hey " << s << endl;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif
    // int day;
    // cin >> day;

    // switch (day)
    // {
    // case 1:
    //     cout << "monday" << endl;
    //     break;
    // case 2:
    //     cout << "tuesday";
    //     break;
    // default:
    //     cout << "done" << endl;
    // }
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
    cout << arr[0] << arr[1] << arr[2] << arr[3] << endl;
    //everything has to be of the same data type in the array, if we use int and then input 7.7 in one of the elements, it trims itself and gets stored as 7.
    //this was a 1D array btw

    arr[3] +=10;
    cout << arr[3] << endl;

    arr[2] = 16;
    cout << arr[2] << endl;

    //2D array
     int matrix[3][4] = {
        {1,2,3,4}
        ,{3,4,5,6}
     }; 
     
     //creates 3 seperate boxes containg 4 boxes each
    //coordinate system kind of naming used, 0 1 2 are indexes of big boxes, and same type of indexing for small boxes, can be identified like (x,y) individualy.

    matrix[1][3]=78;
    cout << matrix[1][3] << endl;
    //for other indexes, it assigns randon intger garbage values because not initialized
    //in arrays we have 0 based indexing

    //strings
    string s = "shesh shiromani";
    cout << s[0] << s[2] << s[4] << endl;
    int len = s.size();
    cout << s[len-1] << endl;
    s[len-1] = 'z';


    //functions - set of code, modularize, readability, used to use the same code multiple times
    // void , return, paraemeterised, non-parameterised
    //void - doesn't return anything


    string name;
    cin >> name;
    printName(name);

    //to make changes in the original function, use & in the parameters. 
    // like void printName(string &s) {}


    int arr[5];
    for (int i=0;i<=5;i++) {
        cin >> arr[i];
        cout << i << endl;
    }

    for (int i=0;i<=5,i++) {
        cout << arr[i] << endl;
    }


    return 0;



}

