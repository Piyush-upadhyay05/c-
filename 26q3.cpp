#include<iostream>
using namespace std;
int main()
{
int n = 5;
int oddsum = 0;
for(int i= 1; i<=n; i++){
    if(i%n!=0){
        oddsum +=i;
    }
}
cout<<"odd sums is " << oddsum<<endl;
return 0;
}