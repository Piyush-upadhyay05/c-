#include <iostream>
using namespace std;
// hollow diamond pattern
int main() {
    int n = 4;

    // Top part of the pattern
    for (int i = 0; i < n; i++) {
        // Spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // First star
        cout << "*";

        // Middle spaces for rows except the first
        if (i > 0) {
            for (int j = 0; j < 2 * i - 1; j++) {
                cout << " ";
            }
            // Second star
            cout << "*";
        }

        // Newline for the next row
        cout << endl;
    }
    //down part
    for(int i=0;i<n-1;i++){
        //spaces
        for (int j = 0; j < i + 1; j++) {
            cout << " ";
        }
        cout<<"*";
        if(i!=n-2){
            //spaces
            for (int j = 0; j < 2*(n-i)-5; j++) {
            cout << " ";
        }

        cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
