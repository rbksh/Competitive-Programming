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

//vectors 
void explainVector() {
    vector <int> v; //declaration, data type and name can be varied, obv. it is a dynamic sized array, can be modified, where as normal array cannot be modified, it is dynamic in nature, arrays are static in nature.
    //above line creates an empty vector or an empty container
    
    v.push_back(1); //adds 1 to the vector
    v.emplace_back(2); // //dyanmically increases the size and adds 2 to the back. emplace is faster than push, why? 
    // push back first creates a copy of the object which is to be stored at a particular memory position, after cloning, it calles a constructor which puts it in the required memory location and then destroyes the original one because it is of no use since the copied one is to be stored in the memory, so in total the entire cost comes up to = 1 build + 1 clone + 1 destroy.
    //in emplace back, it directly calls the constructor at the place the data is to be put in the exact memory location, no cloning, no destryoing. will show significant amount of diff in execution time when dealing with large data
    
    vector pair<int,int> vec;
    vec.push_back({1,2}) //wont be assumed as pair by push if curly braces not included
    vec.emplace_back(3,4) //automatically assumes it to be a pair data type. without needing the curly braces 
    vector <int> vec1(5,100); //declares a vector with 5 indexes in which 100 is stored at all memory locations.
    vector <int> vec2(5) // if element not given, it declares a vector with 5 indexes at which garbage value or 0 is stored, depending on the compiler.
    vector <int> v2(v); //to copy the values of v into v2.
    //the size declaration in vector <int> (5); is only the initial declaration, it can be altered using push or emplace, obv, since its dynamic in nature. 
    
    //to access elements of a particular vector 
    vector <int> v3 = {1,2,3,4,5};
    cout << v3[0] << " " << v3.at(0) << endl; //this is method 1 
    
    //method 2 - using iterator 
    vector <int>::iterator it = v.begin() //points to the memory address of the element stored at the 0th index in that particular vector.
    cout << *(it) << endl; //using * points to that particular element instead of that particular memory address, both corresponding to each other.
    it++;
    
    // for (int i=0; i<v.size();i++) {
    //     for (int x: v) {
    //         cout << *(it) << endl;
    //     }
    // }
    
    //some more types of iterators other than begin
    vector <int>::iterator it = v.end(); //this points to the memory location which is stored at the next index of the index of the last element of that vector, we have to do it-- in order to access the lat element. 
    vector <int>::iterator it = v.rend(); //called reverse end, reverses the cursor of the it iterator, so now, it first points to the memory location of the element stored before the element stored at the first index, we have to do it++ in order to access the first element, so here, first becomes last, last becomes first. 
    
    vector <int>::iterator it = v.rbegin(); //points to the element stored at the last index of that particular vector, the cursor of the it operator also moves in the reverse way when we do it++, ie, from last to first, so here alos, last becomes first, and first becomes last for accessibility of elements and memory locations at their particular indexes. 
    vector <int> v4 (5,20);
    cout << v.back() << endl; //prints the very last element stored in the vector, ie, the element present at v.size() - 1 th index. 
    
    //to print all the elements of a vector, we have 2 methods
    for (vector <int>::iterator it = v.begin();it!=v.end();it++) {
        cout << *(it) << endl; //the loop starts from v.begin(), ie, the 0th index, then goes on as it++ increase such that it doesn't reach v.end() because it points to the memory locatio which is not in the scope of that declared vector,as mentioned earlier.
    }
    //second method, using auto which automatically detects the datatype 
    
    for (auto it = v.begin(); it!=v.end(); it++) {
        cout << *(it) << endl;
    }
    //third method, using for each loop
    for (auto it : v) {
        cout << it << " "; //iteratoes on the datatype. 
    }
    
    //deletion in a vector using the erase function 
    //to erase a particular element stored at a particular memory index 
    vector <int> newVec = {1,2,3,4,5,6};
    newVec.erase(newVec.begin()+1);
    
    //to erase a couple of elements
    newVec.erase(newVec.begin()+2, newVec.begin()+5); //start, end, end is not included. 
    //insert function
    vector <int> Newvec = {100,200,300,400,500};
    Newvec.insert(Newvec.begin(),700); //inserts 700 at the 0th index or the index at which Newvec.begin() points to.
    
    //to insert multiple elements in a vector, the same element to be inserted at all the indexes. 
    
    
    vector <int> newVector = {1,2,3,4,5,6,7,8,9};
    newVector.insert(newVector.begin()+1,2,10); //starting index of insertion, number of insertion, and the number to be inserted at those indexes. 
    
    //to insert one vector into another vector 
    vector <int> vect1 = {1,2,3,4}
    vector <int> vect2 = {5,6,7,8}
    vect2.insert(vect2.begin(),vect1.begin(),vect1.end()); //v.begin points to the index at which the elements of the 2nd vector are to be inserted, next 2 parameters denote the start and end position of the indexes from and to the vector is to be copy pasted in the 1st vector. 
    
    //more vector functions
    cout << vect2.size() << endl; //number of elements currently present in the vector 
    vec2.pop_back(); //removes the last element of that vector 
    
    vect1.swap(vect2); //swaps the data of the 2 vectors into each other
    vect1.clear() //removes all the data from vect 1, turning it into an empty container 
    cout << vect1.empty() << endl; //gives true if the vector is empty, meaning has no elements, shows false even if it has 1 element. 
    
}

//Lists

void explainList() {
    list <int> ls; //declaration, very similar to vector, only diff is that it allows us to do front operations as well
    ls.push_back(4);
    ls.emplace_back(2);
    ls.push_front(5); //adds 5 to the 0th index of the list, ie, inserting it from the left side, instead of right side which we usually see in vectors
    ls.emplace_front(7); //all other functions similar to vector
    
}

//Deque

void explainDeque() {
    deque <int> dq;
    //all functions similar to list and vectors
    dq.push_back(1);
    dq.push_front(0);
    dq.emplace_back(2);
    dq.emplace_front(3);
    dq.pop_back(); //last element removed
    dq.pop_front(); // first element removed 
    dq.front(); // returns the value stored at 0th index of the list 
    dq.back(); //returns the value stored at last index of the list 
    //dq.front/dq.back = some value, to change the first and last values in the list 
    //rest functions same as list and vector 
}

//Stacks

void explainStack() { //LIFO Rule - last in first out, the element going inside the stack last, will be the first one to come out of the stack
    stack <int> st;
    st.push(1); //to add elements into the stack 
    st.push(2);
    st.push(3);
    st.push(4);
    st.emplace(5);
    // {5,4,3,2,1} - this is how the stack looks like 
    cout << st.top() << endl; //prints 5, since it is stored at the 0th index 
    st.pop(); // removes 5 from the stack 
    cout << st.pop() << endl; //will now print 4, since 5 has been removed from the stack 
    cout << st.size() << endl << st.empty() << endl; //other functions similar to vector, list and, deque
    //all operatiosn in stack take place in constant time, ie, O(1). 
    stack <int> st1,st2; //to declare more than one stacks in one line 
    st1.swap(st2); //to swap the data of st1 to st2 and vice versa 
}

//Queue 

void explainQueue() { //FIFO rule - first in first out, the element which is stored first, is the same element which comes out the first. 
    queue <int> q;
    q.push(1);
    q.emplace(2);
    q.push(3);
    
    q.back()+=5;
    
    cout << q.back() << endl << q.front() << endl; //corresponds to last and first elements that entered the stack 
    //all operations in a queue take place in constant time, ie, O(1).
    //swap, size, empty same as stack's operations 
    
}


int main() {
    print();
    
    int s=sum(1,2);
    cout << s << endl;
    explainPair();
    return 0;
}