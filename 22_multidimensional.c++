#include<iostream>
using namespace std;
int main()
{
string letterst[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};
cout << letterst[0][2]<<endl ;
//Change Elements in a Multi-Dimensional Array
string letters[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};
letters[0][0] = "Z";

cout << letters[0][0];
return 0;
}