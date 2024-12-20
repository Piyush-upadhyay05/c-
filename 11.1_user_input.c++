#include<iostream>
using namespace std;
int main()
{
// string firstname;
// cout <<"your name is:" << endl;
// cin >>firstname;
// cout << "your name is " <<firstname;
string fullName;
cout << "Type your full name: ";
getline (cin, fullName);// getline is used in place of user input 
cout << "Your name is: " << fullName;
return 0;
}