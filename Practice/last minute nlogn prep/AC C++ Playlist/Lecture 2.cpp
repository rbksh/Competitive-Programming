#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif
    int n;
    cin >> n;
    cout << sizeof(n) << endl;
    //sizeof() is a compile time operator which returns the size of a variable or data type in bytes. It can be used to determine the size of built-in data types, user-defined data types, and arrays. The result of sizeof() is a constant expression, which means it can be evaluated at compile time.
    //int data type occupies 4 bytes(or 32 bits) of memory in most systems. Therefore, the output of sizeof(n) will be 4.
   
    char code = 'A';
   char code2 = 'b';
   cout << code << " " << code2 << endl;
   cout << sizeof(code) << " " << sizeof(code2) << endl;
   //char data type occupies 1 byte(or 8 bits) of memory in most systems. Therefore, the output of sizeof(code) and sizeof(code2) will be 1.
   //char only stores a single character. It can be a letter, digit, punctuation mark, or any other symbol that can be represented in the character set. 
   //char input to be givne in single quotes
   //ASCII = american standard code of information interchange.
   //ASCII code for A=65, a=97 and so on.
   //memory stores positive and negative values differently.
   
   float Price = 12.99f; // f is used by the compiler to identify that this is a floating data type/value, else it will not identiy.
   cout << Price << endl;
   cout << sizeof(Price) << endl;
   //float data type occupies 4 bytes(or 32 bits) of memory in most systems. Therefore, the output of sizeof(Price) will be 4.

   bool isFalse = true;
   bool isTrue = false;
   cout << isFalse << " " << isTrue << endl;
   cout << sizeof(isFalse) << " " << sizeof(isTrue) << endl;
    //bool data type occupies 1 byte(or 8 bits) of memory in most systems
   //true internally converts to 1 and false to 0, therefore the output.

   double Amount = 112.234;
   cout << Amount << endl;
   cout << sizeof(Amount) << endl;
   // double occupies double the memory of float datatype, which is 8 bytes.
   //it is used to store decimal/floating point values only.
   //by default, if we write any floating point value, it is stored in a double data type only.

   //int, char, bool, float, double are collectively called primitive(very basic) data types.  

   //Type Casting-:
   //it is a method to convert one data type to another.
   // it has 2 parts, type conversion and type casting.
   //type conversion means converting a data type occupying relatively less memory to a data type which is occupying relatively more memory. it is an implicit process, meaning the compiler will do it automatically for us, without any data loss.
   char Letter = 'A';
   char Name = 'a';
   int value2 = Name; // implicit conversion
   int value = Letter;
   cout << value << endl;
   cout << value2 << endl;
   //ascii code printed. value of right is stored in left variable

   //type casting is an explicit type of conversion which is generally used to convert data types occupying relatively more memory to data types occupying relatively less memory. it is a manual process, meaning the programmer has to do it explicitly, and there is a possibility of data loss. we can do it even if compiler doesn't allow to do so by forcing it.
   double newPrice = 129.99;
   int newPrice2 = (int)newPrice; // explicit type casting
   cout << newPrice2 << endl;
   cout << sizeof(newPrice2) << endl;
   
   //input in c++
   int Number;
   cout << Number << endl; // some random garbage value will be printed since it doesn't have a specified value till now.

   //operators in c++
   //arithmetic operators-: +, -, *, /, %
   int a=10, b=3;
   int sum=a+b;
   int difference=a-b;
   int product=a*b;
   int quotient=a/b;
   cout << "Sum: " << sum << endl;
   cout << "Difference: " << difference << endl;
   cout << "Product: " << product << endl;
   cout << "Quotient: " << quotient << endl;
   cout << "Remainder: " << (a%b) << endl; // part after decimal is completely ignored in c++.

   int c=5,d=1;
   cout << "sum: " << (c+d) << endl;
   cout << "difference: " << (c-d) << endl;
   cout << "product: " << (c*d) << endl;
   cout << "quotient: " << (c/d) << endl;
   cout << "remainder: " << (c%d) << endl;

   //int/int=int, float/int=float, int/float = float(because float has more precision, even tho both occupy same memory), double/int=double(usually the one occupying more memory is the result form).
   //above is same for other operations as well.

   cout << (5/(double)2) << endl; // 5/2=2.5, but since both are integers, the output will be 2. but if we convert one of them to double, then the output will be 2.5. type casting is used here. 

   int ans = (7/(double)3);
   cout << ans << endl; 
   //answer will be in int here, since initially the value is double, but it is stored in an int varibale, hence by type casting, the ans will be in int. 

   //relational operators either return true or false in output, in form of 1 or 0 ofc.
   cout << (3>5) << endl;
   cout << (3<5) << endl;
   cout <<( 3==3) << endl;
   cout << (3!=3) << endl;
   cout << (3!=5) << endl;

   //logical operators, or and not
   //or = ||(called pipe operator), and = &&(double amperscent), not = !( single exclamation mark)
   cout << !(3>2) << endl; // altho it is true, but ! makes it false
   cout << (3>1 || 5>2) << endl; // true or true = true
   cout << (3>1 || 5<2) << endl; // true or false = true
   cout << (3>1 && 5<2) << endl; // true and false = false

   //sum of 2 numbers entered by user
   int x,y;
   cout << "enter x: " << endl;
   cin >> x;
   cout << "enter y: " << endl;
   cin >> y;
   int Sum=x+y;
   cout << "sum: " << Sum << endl;

   //unary operators 
   int g=5;
   int h=g++; // this means first assign, then update. so h will still have older value of g, and g will have the new incremented value of itself, when printed.
   cout << g << endl;
   cout << h << endl;
   int i=++g; //first increment, then assign. so i will have incremented value of g.
   cout << g << endl;
   cout << i << endl;
   //same for a-- and --a.

   /*
   output.txt for this lecture is as follows-:
   4
A b
1 1
12.99
4
1 0
1 1
112.234
8
65
97
129
4
1389429480
Sum: 13
Difference: 7
Product: 30
Quotient: 3
Remainder: 1
sum: 6
difference: 4
product: 5
quotient: 5
remainder: 0
2.5
2
0
1
1
0
1
0
1
1
0
enter x: 
enter y: 
sum: 282853853
6
5
7
7
   */
   
    return 0;

    
}