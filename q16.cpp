//calculate the sum of the number 1 to n
#include<iostream>
using namespace std;
int sum(int n){
    int sum = 0;
    for(int i=0;i<=n;i++){
        sum+=i;
        
    }
    return sum;
}
    
int main()
{
    cout<< sum(7)<<endl;
    cout<< sum(5);

return 0;
}

