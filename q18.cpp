#include <iostream>
using namespace std;

int sumofdigit(int num) {
    int digitsum = 0;
    while (num > 0) {                // Use num instead of number
        int last_digit = num % 10;   // Declare last_digit properly
        num = num / 10;              // Divide num to remove the last digit
        digitsum += last_digit;      // Add last digit to the sum
    }
    return digitsum;                 // Return the calculated sum
}

int main() {
    int num = 23566767;                   // Example input
    cout << sumofdigit(num) << endl; // Call the function and print the result
    return 0;
}
