// short hand is also known as ternary operator 
#include<iostream>
using namespace std;
int main()
{
//SYANTAX variable = (condition) ? expressionTrue : expressionFalse;
// 
// int time = 20;
// if (time < 18) {
//   cout << "Good day.";
// } else {
//   cout << "Good evening.";
// }
//YOU CAN SIMPLIFY THIS INTO SHORT HAND 
int time = 20;
string result = (time < 18) ? "Good day." : "Good evening.";
cout << result;
return 0;
}