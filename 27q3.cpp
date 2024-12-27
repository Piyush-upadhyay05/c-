// check if a number is prime number ia not 
#include<iostream>
using namespace std;
int main()
{
int n =7;
int i;
bool isprime = true;
for(int i =2; i<= n-1; i++){
    if(n % i==0){
    isprime = false;
    break;
 }
} 
if(isprime ==true){
    cout<<"prime no";
}else{

cout<<"number is non prime";
}
return 0;
}