# include <iostream>
# include <string>
using namespace std;
int main(){
    string first = "hello ";
    cout << first;
    // example
    string firstName = "John ";
    string lastName = "Doe";
    string fullName = firstName +""+ lastName;
    cout << fullName;
    //apppend
    string first_letter = "ayush ";
    string last_letter= "jaiswal";
    string full_letter = first_letter.append(last_letter);
    cout << full_letter;

    return 0;
}