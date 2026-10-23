#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);


#endif
    //Lecture 3 - Conditional Statements and Loops
    //ans of a condition is either yes or no
    //if-else syntax used
    //to check if a number is positive or negative
    int n;
    cin >> n; 
    if (n>=0) {
        cout << "positive" << endl;
    } else {
        cout << "negative" << endl;
    }
    int a;
    cin >> a;
    if (a>0) {
        cout << "positive" << endl;
    } else if (a<0) {
        cout << "negative" << endl;
    } else if (a==0) {
        cout << "zero" << endl;
    } else {
        cout << "invalid input" << endl;
    }
    //make sure the indentation is correct.
    //to check if user is eligible to vote or not
    int age;
    cout << "please enter your age: " << endl;
    cin >> age;
    if (age>=18) {
        cout << "congratulations! you are eligible to vote" << endl;
    } else {
        cout << "sorry! you are not eligible to vote" << endl;
    }
    //to check if a number is even or odd
    int num;
    cout << "please enter a number: " << endl;
    cin >> num;
    if (num%2==0) {
        cout << "the number is even" << endl;
    } else if (num%2!=0) {
        cout << "the number is odd" << endl;
    } else {
        cout << "invalid number entered" << endl;
    }
    //else statements are usually optional, even if we remove those, no error will be generated
    //{} blocks are also optional if we want single line statement,s but it is a sign of a good programmer
    //sequentially execution is followed

    //grading system example
    int Marks;
    cout << "Please enter your marks(out of 100): " << endl;
    cin >> Marks;
    if (Marks>=90) {
        cout << "Grade: A" << endl;
    } else if (Marks>=80 && Marks<90) {
        cout << "Grade: B" << endl;
    } else if (Marks<=80) {
        cout << "Grade: C" << endl;
    } else {
        cout << "invalid input entered" << endl;
    }

    //check if character entered is lowerase or uppercase
    char ch;
    cout << "please enter a character" << endl;
    cin >> ch;
    if (ch>='a' && ch<='z') {
        cout << "the character is lowercase" << endl;
    } else if (ch>='A'&& ch<='Z') {
        cout << "character is uppercase" << endl;
    } else {
        cout << "invalid character entered" << endl;
    }
    //done on the basis of ASCII values. 
    char Ch;
    cout << "please enter another character" << endl;
    cin >> Ch;
    if (Ch>=65 && Ch<=90) {
        cout << "the character entered is uppercase" << endl;
    } else {
        cout << "the character entered is lowercase" << endl;
    }
    //entered character is being converted to ASCII using implicit conversion
    
    //ternary statements, ternary means 3
    //condition?stt1:stt2;, if condition is true, stt1 is executed, if false, then stt2 is executed. 
    //ternary statements can be used directly in cout also.
    int x;
    cin >> x;
    cout << (x>10?"greater than 10":"less than 10") << endl;
    //usually if-else statements are not converted to ternary statements, because it is hard to read them.
    //only use ternary when if else condition is of one line.

    //loops
    //while loop, for loop, do-while loop
    //while(condition) {
    //     statements;
    //}
    int count = 1;
    while (count<=5) {
        cout << "count is: " << count << endl;
        count++;
    }
    //after the condition is not satisfied/returns false after check, the loops stops and new line character is automatically printed.
    //to print numbers from 1 to .
    int number;
    cout << "please enter a number according to your choice: " << endl;
    cin >> number;
    int i=1;
    while(i<=number) {
        cout << i << endl;
        i++;
    }
    //a loop whose ending condition is never false is called an infinite loop. 
    //memory gets filled completely and program crashes.
    //meaningful variable names are writte in CamelCase.

    //for loop
    //for(initialization; condition; updation) {
    //     statements;
    //}
     int InputNum;
     cin >> InputNum;
     for (int j=1;j<=InputNum;j++) {
        cout << j << endl;
     }
     //to find the sum of numbers from 1 to n
     int y;
     int sum=0;
     cin >> y;
     for (i=1; i<=y; i++) {
        sum+=i;
     }
     cout << sum << endl;
    //  int z;
    //  cin >> z;
    //  int Sum = 0;
    //  int k=1;
    //  while (k<=z) {
    //     Sum+=k;
    //  }
    //  cout << Sum << endl;

    //to print only odd numbers from 1 to n
    int l;
    int OddSum=0;
    cin >> l;
    for (i=1;i<=l;i++) {
        if (i%2!=0) {
            cout << i << endl;
            OddSum+=i;
        } else {
            cout << "not an odd number" << endl;
        }
    }
    cout << OddSum << endl;

    //above question using while loop
    int e;
    cin >> e;
    int SUM=0;
    int j=1;
    while(j<=e) {
        if (j%2!=0) {
            SUM+=j;
            j++;
        }
    }
    cout << SUM << endl;

    //to check if a number is prime or not
    int someNumber;
    cout << "please enter a number to check if its prime or not" << endl;
    cin >> someNumber;
    for (i=2; i<someNumber;i++) {
        if (someNumber%i==0) {
            cout << "the number is not prime" << endl;
        } else {
            cout << "the number is prime" << endl;
        }
    }
    

}