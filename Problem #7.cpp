#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main ()

{
	cout << "Radius Calculator 9000" << endl << endl;
	
    double radius;
    cout << "Enter radius: ";
    cin >> radius;
    
    double pi = 3.14159;
    double area = pi * (pow (radius,2));
    double circumference = 2 * pi * radius;
    
    cout << fixed << setprecision(2);
    cout << "The area is: " << area << endl << "The circumference is: " << circumference << endl;
    
}
