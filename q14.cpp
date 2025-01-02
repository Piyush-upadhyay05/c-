#include <iostream>
using namespace std;

// Pyramid pattern
int main() {
    int n = 4;

    for (int i = 0; i < n; i++) {
        // Spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // Ascending numbers (1 to i+1)
        for (int j = 1; j <= i + 1; j++) {
            cout << j;
        }
        // Descending numbers (i to 1)
        for (int j = i; j > 0; j--) {
            cout << j;
        }
        // Newline for the next row
        cout << endl;
    }

    return 0;
}
