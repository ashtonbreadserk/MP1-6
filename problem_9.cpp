#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main ()
{
    double item1, item2, item3;
    double subtotal, disc = 0.0, total, tax;
    const double discountRate = 0.10;
    const double taxRate = 0.07; 


    cout << "Item 1: ";
    cin >> item1;
    cout << "Item 2: ";
    cin >> item2;
    cout << "Item 3: ";
    cin >> item3;

    subtotal = item1 + item2 + item3;

    if (subtotal > 100) {
        disc = ( subtotal * discountRate);
        subtotal -= disc; // subtotal = subtotal - disc
    }

    tax = taxRate * subtotal; 

    total = subtotal + tax; 

    cout << "Subtotal: " << subtotal << '\n';
    cout << "Discount: " << disc << '\n'; 
    cout << fixed << setprecision(2) << "Sales Tax: " << tax << '\n';
    cout << fixed << setprecision(2) << "Total: " << total << '\n';

    return 0;
}
