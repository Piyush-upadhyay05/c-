// print factorial of the number n 
// #include<iostream>
// using namespace std;
// int main()
// {
// int number;
// long long factorial = 1;
// cout<<"enter a number";
// cin>>number;
// if(number<0){
//     cout<<"factorial is not defined";
// }else{
//     for(int i=1;i<=number;i++){
//         factorial *=i;
//     }
// }
// cout<< "factorial of " << number <<"is"  << factorial <<endl;
// return 0;
// }
#include <iostream>
using namespace std;

int main() {
    int number;
    long long factorial = 1; 

    cout << "Enter a number: ";
    cin >> number;

    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        for (int i = 1; i <= number; i++) {
            factorial *= i; 
        }
        cout << "The factorial of " << number << " is " << factorial << "." << endl;
    }

    return 0;
}