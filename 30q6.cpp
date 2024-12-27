// pattern problem 
//SQUARE PATTERN
#include<iostream>
using namespace std;
int main()
{
int n = 4;
for(int i=1;i<=n ; i++){// number of line (OUTER LOOP)
    for(int j =1;j<=n;j++){//INNER LOOP
        cout<< j;
    }
    cout<<endl;
}
return 0;
}