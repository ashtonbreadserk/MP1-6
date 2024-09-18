#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main ()
{
    // constant and variables
    const int ONE     = 1,
              HUNDRED = 100,
              NUMBER_OF_MONTHS = 12;

    float principal, 
          rate, 
          years, 
          monthlyPay;
    
    // ask for principal, rate, and years
    cout << "Principal: ";
    cin >> principal;
    cout << "Interest Rate: %";
    cin >> rate;
    cout << "Years: ";
    cin >> years;

    rate /= NUMBER_OF_MONTHS; // convert percentage to decimal
    rate /= HUNDRED; 

    years *= NUMBER_OF_MONTHS; // convert years to months


    // monthlyPay = [Rate * (1 + Rate)^N / ((1 + Rate)^N - 1)] * L
    monthlyPay = ((rate) * pow( ONE+ (rate), years) / (pow(ONE + (rate), years) - ONE)) * principal;

    cout << fixed << setprecision(2);
    cout << "Monthly Payment: " << monthlyPay << '\n';

    return 0;
}
