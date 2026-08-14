#include <bits/stdc++.h>
using namespace std;



void explainPairs() {
    pair <int,int> p = {1,3};
    cout << p.first << endl << p.second << endl;

    pair <int,pair<int,float>> q = {1,{3,4.4}};
    cout << q.first << q.second.first << q.second.second << endl;

    pair <int,int> arr[]= {{1,2},{3,4},{4,5}};
    cout << arr[0].first << arr[0].second << arr[1].first << arr[1].second << arr[2].first << arr[2].second << endl; 
    //pair data type is stored in the utility library(included in bits/stdc++.h)
    //arrays are constant in size, we cannot modify their size after taking input
}

void explainVectors() {
    //vector is a container which is dyanmic in nature, is always subject to change wrt conditions provided
    vector <int> v; //creates an empty container
    v.push_back(1); //adds 1 to that empty vector, not empty anymore
    v.emplace_back(2); //adds 2 to the same vector, usually faster than push back
    //emplace back is faster than push back because push back first creates a temporary copy, and after adding it into the original vector, it destroys the temporary copy, adding extra work. 

    vector <pair<int,int>> vec;

    vec.push_back({1,2});
    vec.emplace_back(3,4); //automatically assumes it to be a pair data type without {} brackets

    vector <int> v1(5,100); //already has 5 indexes with 100 at all of them
    vector <int> v2(5); //declares an empty vector with garbage value at all indexes, dependent on compiler
    v2.push_back(1); //increases the size of vector v2 to 6 even tho we defined 5, hence dynamic in nature.

    vector <int> v3(v2); //copies the content of v2 into a new vector v3, at all indexes

    cout << v1[0] << endl << v1.at(2) << endl; //prints the values at corresponding indexes

    //iterators


    vector <int>::iterator it = v.begin(); //iterator does nothing but points to the memopry where that element is stored, only the memory address, not the exact element. 
    it++;
    cout << *(v.begin()) << endl; 
    //v.begin() points to the 0th index of the corresponding vector "v", will print the memory address of the element stored on that index.
    //in order to access anything which is stored in the memory, just use * symbol and the command after it.
    cout << *(it) << endl;
    it+=2;
    cout << *(it) << endl;

    vector <int> v4;
    vector <char>::iterator it = v4.end(); // starts at the index right after the last element

    vector <pair<int,int>> v9;
    v9.emplace_back(1,2);

    for (int i,j=0;j<=100;i++,j++) {
        v9.emplace_back(i,j);
        cout << i << endl;
    }

    int len = v9.size();

    cout << v9[len-1].first << endl << v9[len-1].second << endl;
    auto target_pair = v9[len-v9[0]].first;
    
    vector <int> v10;
    vector <int>::reverse_iterator it= v10.rend(); //index pointer moves in the opposite direction

    //ways to print the elements of a vector


    for (vector <int>::iterator new_it = v.begin(); it!=v.end();it++){
        cout << *(it) << endl;
    }


    for (auto it = v.begin();it!=v.end();it++) {
        cout << *(it) << endl;
    }

    for (auto it : v) {
        cout << it << endl;
    }

    //delete something in a vector - erase function
    //for particular element v.erase(address)
    //for couple of element v.erase(start,end), end not included, only start included


    vector <float> vect;
    for (int i=-;i<=10;i++){
        vect.push_back(i);
    }

    v.erase(v.begin()); //first element at the 0th index is erase

    //insert in a vector

    v.insert(v.begin()+1,300);
    //v.insert(index at which insertion is to be made, number of insertions to be made, elemnet to be inserted)


    //insert a vector into a vector

    vector<int> copy(2,50);
    v.insert(v.begin(),copy.begin(),copy.end());

    cout << v.size() << endl; //number of elements in the vector
    v.pop_back();//removes the last element of that vector and prints after removing it

    v.swap(copy); //swaps the data of the 2 corresponding vectors, namely v and copy

    cout << v.empty() << endl; 
    //prints either True or False if the vector is empty or not

}


void explainList() {

    list <int> ls;
    //very similar to vector, gives front operations, dynamic in nature.-
    ls.push_back(0);
    ls.emplace_back(1);

    ls.push_front(5); //inserts 5 at the 0th index

    ls.emplace_front(6); //does the same thing as stated above



}

void explainDeque() {
    //very similar to list and vector, few extra fuctions
    deque <int> dq; //declaration, currently 
    //push back emplace back push front emplace front- all of these works
    //rend rbeginn end begin clear insert size swap - work
    dq.pop_front(); //deletes the element present at the 0th index and updates the deque named dq
    dq.front();
    dq.back(); //corresponds to the first and last element of that corresponding vector only
}

void explainStack() {
    //remember LIFO = last in first out
    stack <int> st;
    st.push(1);
    st.push(3);
    st.emplace(5);
    //5 is at the 0th index now

    cout << st.top() << endl; //5 printed, indexing access like st[i] not allowed
    //stack has only 3 functions, push, pop, and top.
    st.pop(); //deletes the top-most element which is 5 in this case

    stack <int> s1,s2; //declaring 2 stacks in one statement
    s1.swap(s2);
}


void explainQueue() {

    queue <int> q;
    //remember FIFO - first in first out

    q.push(1);
    q.push(2);
    q.emplace(5);

    q.back()+=5; //corresponds to element stored at the last index only, not like deque.
    q.front(); //corresponds to the elemnet stored at the 0th index of the queue.
    q.pop(); //deletes the element stored at the 0th index

}

void explainSort() {
    int a,n;
    cin >> a >> n;
    sort(a,a+n);
    vector <int> Vt{5,100};
    sort(Vt.begin(),Vt.end()); //end is not included, start included.
    sort(a,a+n, greater<int>()); //sort in descending order.
    


}










int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif

}


