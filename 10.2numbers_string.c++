#include<iostream>
#include <string>
using namespace std;
int main()
{
int x = 11;
int y = 22;
int z = x + y;  
string p = "10";
string q = "20";
string r = p + q; 
cout << z << endl;
cout << r << endl;
string name = "ayush jaiwal";
cout << name.length() ;
string another_name = "piyush upadhay";
cout <<"the size of the another name is" << another_name.size() << endl;
cout << another_name[0];
cout << another_name[1] <<endl;
//To print the last character of a string, you can use the following code:
string myString = "Hello";
cout << myString[myString.length() - 1] << endl;
//Change String Characters
another_name[3] = 't';
cout <<another_name;
// at() is used to print the element of the particular index and it is also used to change the element 
string youstring = " ayush jhatu";
cout <<youstring.at(0) <<endl; // its print the 0 number element 
youstring.at(1) = 'c';
cout << youstring;
return 0;
}