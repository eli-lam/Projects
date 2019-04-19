/**
 *Find PI to the Nth Digit - Enter a number and have the program generate PI up to that many decimal places. 
 *Keep a limit to how far the program will go.
 */

#include <iostream>
#include <iomanip>      // std::setprecision
using namespace std;

//There will be accuracy errors due to the way double works
int main()
{
    const long double PI = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679L;
    int input = 0;

    while (input < 1 || input > 100) 
    {
        cout << "Enter to which decimal place do you want to print PI(1-100): ";
        cin >> input;
        if (input > 0 && input < 101)
            cout << setprecision(input+1) << PI;
        else
            cout << "Invalid number. Try again. " << endl;
    }

    return 0;
}
 