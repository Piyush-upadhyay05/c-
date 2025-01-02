// pass by value 
#include<iostream>
using namespace std;
void fun(int x){
     x = 2*x;
    cout<<" x =" << x <<endl;
 }
int main(){
    int x = 5;
    fun(x);
    cout<< " x =" <<x <<endl;


return 0;
}