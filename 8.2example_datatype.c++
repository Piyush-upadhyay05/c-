#include <iostream> // For input and output
#include <iomanip>  // For formatting output
using namespace std;

int main() {
    // Declare variables
    string itemName;
    int quantity;
    double pricePerItem, totalCost;

    // Input item details from the user
    cout << "Enter the item name: ";
    getline(cin, itemName); // Read the item name
    cout << "Enter the quantity of items: ";
    cin >> quantity; // Read the quantity (integer)
    cout << "Enter the price per item: ";
    cin >> pricePerItem; // Read the price (double)

    // Calculate total cost
    totalCost = quantity * pricePerItem;

    // Output the result
    cout << fixed << setprecision(2); // Format output to 2 decimal places
    cout << "Item: " << itemName << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Price per item: $" << pricePerItem << endl;
    cout << "Total cost: $" << totalCost << endl;

    return 0;
}
