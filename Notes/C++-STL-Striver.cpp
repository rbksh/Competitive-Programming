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
//PQ - priority queue 

void explainPQ() {
//Maximum Heap
    priority_queue <int> pq; // declaration
    // the element which has the largest value, stays at the top, ie, at the 0th index of the PQ. numerically in int/float/double, largest char in characters, lexigraphically largest in case of strings 
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.push(10);
    //{10,8,5,2}
    // this is not a linear data structure, inside a PQ, a tree data structure is mainted.
    
    cout << pq.top() << endl; //prints 10 in this case .
    pq.pop(); //removes the topmost element from the PQ, 10 in this case. 
    //size ,swap, empty function same as stack, dq, and queue. 

//Minimum Heap 
    //how to declare a PQ which stores element from minimum to maximum, in the reverse order of the old-fashioned PQ
    priority_queue <int, vector <int>, greater <int>> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);
    //{2,5,8,10}
    
    cout << pq.top() << endl; // prints 2 in this case, the element at the top, which is the minimum element out of all in the pq
    //pq.push() and pq.pop() has logarithmic complexity, ie, O(logn), and pq.top() has constant time complecity, ie, O(1)
}

//Sets 
void explainSets() {
    //it stores everything in the sorted order, and all elements are unique.
    //sorted by default means storing all the elements in increasing / non-decreasing order. 
    set <int> st;  //declaration 
    st.insert(1);
    st.insert(2);
    st.emplace(2); //will not store the element 2 again
    st.insert(3);
    st.insert(5);
    st.insert(4);
    //{1,2,3,4,5}
    //this is not a linear container, a tree data structure is maintained inside it. 
    //this functionality of insert can also be used with vectors, it increases its efficiency 
    //begin end rbegin rend swap size empty are same as other containers 
    
    auto it = st.find(3); //returns an iterator which points to the 3, if found, if not found, it points an iterator to st.end(), which is out of scope of the length of the set. 
    
    if (it!=st.end()) {
        cout << *(it) << endl; //will print 3 in this case, since we used *(it), also called de-referencing. just printing it will cause a compilation error. st.end() causes undefined behavriour like SEGSEV(segmentation fault) or a crash.
    }
    
    st.erase(5); //erases 5 from the set, O(logn) time complexity of this function. 
    
    int cnt = st.count(5); //the count function will either return 0 or 1, since set is both unique and sorted, so one element can occur a maximum of 1 time, or it will not occur at all, that's it. 
    
    //another way to erase using the memory address using an iterator 
    auto it = st.find(3);
    st.erase(it); // O(1) is the time complexity of this function 
    
    auto it1 = st.find(1);
    auto it2 = st.find(4);
    st.erase(it1,it2); //will erase all elements between the elements which correspond to it1 and it2, it2 not included, it1 included. 
    
    //lower bound and upper bound video to be watched 
    
//most functions in set have 0(logn) time complexity.
}

//Multi-sets

void explainMultiSet() {
    //follows only sorted rule, not the unique rule. will store all occurences of a single element, but will arrange them in increasing/non-decreasing order by default 
    multiset <int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    //{1,,1,1}
    //using the erase function on 1 particular element erases all its occurences inside that particular multiset
    int cnt = ms.count(1); //will count all the occurences of the element 1 in the multi-set ms.
    ms.erase(1); //{}, now an null multi-set 
    
    ms.erase(ms.find(1)); //erases only the first occurence of the element 1 in the multi-set. 
    ms.erase(ms.find(1),ms.find(1)+2); //[first,last); 
    
    //above 2 functions correspond the the memory address of that particular element, hence only first occurence is removed, not all as in the usual erase function. 
    //rest all functions same as set. 
    
}
//Unordered Sets

void explainUSet() {
    //only follows unique rule, not the sorted rule, stores all the elements as it is, but all elements will be unique , has randomized order.  
    unordered_set <int> st; // declaration 
    //lower_bound and upper_bound functions do not work here, rest all functions are similar to set, with O(1) time complexity. 
    
//in very rare cases, when the data is abnormally large and the user wants us to explore the worst case possible scenario, O(logn) complexity is seen. 
}

//Maps

void explainMap() {
    //this is a kind of container which stores everything in a {key,value} fashion. where all keys are unique, values can be same or different, depending on the situation. 
    // key can be of any datatype 
    //it stores unique keys in the sorted order, ie, increasign/non-decreasing order. 
    map<int,int> mpp; //<int,int> refers to data type of key and value respectively. 
    map <int, pair<int,int>> mpp; 
    map <pair<int,int>, int> mpp; 
    
    mpp[1] = 2; //corresponds to a key value pair of {1,2}
    mpp.emplace({3,4}); 
    mpp.insert({5,6}); 
    
    mpp[{2,3}] = 10; //for <pair<int,int>, int> type of key value pair 
    
    //to iterate on a map 
    for (auto it: mpp) {
        cout << it.first << " " << it.second << endl; // will print first element of the key value pair, which is the key, then the value for the first element, then will do the same with all other elements as well. 
    }
    //to access values of a map
    cout << mpp[1] << endl; // prints the corresponding value pair to the key which is 1
    cout << mpp[5] << endl; //if the key = '5' is not found, it returns 0 or null.
    auto it = mpp.find(3); //corresponds to the memory address of the the element 3 in the map
    cout << *(it).first << endl << *(it).second << endl; //key then value printed, if only *(it), then key value pair would have been printed. 
    auto it = mpp.find(5); //if not found, it points to mpp.end() which is 1 more than the index of the last element in the map. 
//all other functions like erase swap size and empty are same 
}

//Multi-maps

void explainMultiMap() {
    //here we can store duplicate keys, but they will be stored in the sorted order only, ie, increasing order by default. 
    //mpp[key] cannot be used here since duplicate keys are stored and one particular key can correspond to multiple values. 
}

//Unordered Maps

void explainUnorderedMap() {
    //same as multimaps, it will store unique keys but not in the sorted order, they will be randomized. 
    
    //has 0(1) complexity in most cases, but shows 0(n) in worse possible cases. 
}

int main() {
    print();
    
    int s=sum(1,2);
    cout << s << endl;
    explainPair();
    return 0;
}