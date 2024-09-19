#include <iostream>
using namespace std;

int main ()
{
    double item1, item2, item3;
    double subtotal, discount = 0.0, total, tax;
    const double discountRate = 0.10;
    const double taxRate = 0.07; 


    cout << "Item 1: ";
    cin >> item1;
    cout << "Item 2: ";
    cin >> item2;
    cout << "Item 3: ";
    cin >> item3;

    subtotal = item1 + item2 + item3;

    if (subtotal > 100) 
    {
        discount = subtotal * discountRate;
        subtotal -= discount; // subtotal = subtotal - disc
    }

    tax = subtotal * taxRate; 
    total = subtotal + tax; 

    cout << "Subtotal: " << subtotal + discount << '\n';
    cout << "Discount: " << discount << '\n'; 
    cout << "Sales Tax: " << tax << '\n';
    cout << "Total: " << total << '\n';

    return 0;
}
