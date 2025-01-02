// calculate factorial 
#include<iostream>
using namespace std;
int factorial(int n){
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial*=i;
    }
    return factorial;
}
int main()
{
cout<< factorial(5) <<  endl;
cout<< factorial(9) <<  endl;
return 0;
}