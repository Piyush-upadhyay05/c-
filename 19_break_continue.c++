#include<iostream>
using namespace std;
int main()
{
int i = 0;
while (i < 10) {
  cout << i << "\n";
  i++;
  if (i == 4) {
    break;
  }
}
int j = 0;
while (j < 10) {
  if (j == 4) {
    j++;
    continue;
  }
  cout << j << "\n";
  j++;
}
return 0;
}