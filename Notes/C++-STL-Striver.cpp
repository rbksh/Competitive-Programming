#include <bits/stdc++.h>
using namespace std;



//explaining functions
//a void function doesn't return anything unless it is called in a main function
void print() {
    cout << "Shesh Shiromani" << endl;
}

//return type function
int sum(int a, int b) { //this function could contain any kind of data-type, like double, float, long long etc, depending on what value is to be returned
    return a+b;
}

//parts of cpp STL - 1. algorithms, 2. containers, 3. functions, 4, iterators
//containers to be studied first(queue, stack, vectors etc)
//understand pair before going into containers

void explainPair() {
    pair <int,int> p = {1,2}; //declaration, data type can be varied
    cout << p.first << endl << p.second << endl; //to access each element in the pair 
    
    //to declare pair inside a pair
    pair <int, pair <int,int>> p1 = {1,{2,3}}; //called nested property of pair data-type.
    cout << p1.second.first << endl << p1.second.second << endl;
    
    //we can also declare pairs in an array, with multiple pairs as single elements of an array 
    pair <int ,int> arr[] = {{1,2},{3,4},{5,6}};
    cout << arr[1].second << endl; //2nd element of the pair at the 1st index of the array 
    
}




int main() {
    print();
    
    int s=sum(1,2);
    cout << s << endl;
    explainPair();
    return 0;
}