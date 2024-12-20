#include<iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
// A vector with 3 elements
vector<string> cars = {"Volvo", "BMW", "Ford"};

// Adding another element to the vector
cars.push_back("Tesla");//ading element using vector
for (string car : cars) {
    cout << car << "\n";
  }
string fruits[4] ={"apple" , "mango" , "pine","guava"};
cout << sizeof(fruits)<< endl;
//loop through an array with sizeof 
int myNumbers[5] = {10, 20, 30, 40, 50};
for (int i = 0; i < sizeof(myNumbers) / sizeof(myNumbers[0]); i++) {
  cout << myNumbers[i] << "\n";
}
return 0;
}