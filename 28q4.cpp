// find the number of the number which is divisible by 3 
#include<iostream>
using namespace std;
int main()
{
int start , end;
int n = 0;
int sum = 0;
cout<<"enter the starting of the number" <<endl;
cin >>start;
cout<<"enter the ending of the number"<<endl;
cin>>end;
for(int i= start ; i<=end; i++){
    if(i% 3 ==0)
    sum += i;
}
cout <<"the sum of the number of the number divisible by 3 is"<< sum<<endl;
return 0;
}