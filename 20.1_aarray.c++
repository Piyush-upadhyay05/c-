#include<iostream>
#include <string>
using namespace std;
int main()
{
string cars[4] = {"lemborgini" , "volvo" , "mahindra" , "swift"};
cout << cars[1] <<"\n";
// to change the element in array
cars[1] = "BMW";
cout << cars[1];
return 0;
}