#include<iostream>
using namespace std;//floyds triangl; pattern
int main()
{
int n = 4;
int number=1;
for(int i=0;i<n;i++){
    for(int j =0;j<i+1;j++){
        cout<<number;
        number++;
    }
    cout<<endl;
}
return 0;
}