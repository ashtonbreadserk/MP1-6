#include <iostream>
using namespace std;

int main() {
   
    double principal, rate, time, interest;

    
    cout << "Principal: ";
    cin >> principal;
    
    cout << "Rate of interest (in %): ";
    cin >> rate;
    
    cout << "Enter the time (in years): ";
    cin >> time;

    interest = (principal * rate * time) / 100;
    cout << "The simple interest is: " << interest << endl;

    return 0;
}

