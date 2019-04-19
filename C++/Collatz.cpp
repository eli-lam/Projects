/**
 * Collatz Conjecture - Start with a number n > 1. Find the number of steps it takes to reach one(1) 
 * using the following process: If n is even, divide it by 2. If n is odd, multiply it by 3 and add 1.
 */

#include <iostream>
using namespace std;
 
int main()
{
    int count{0};
    cout << "Enter a number bigger than 1: "; 
    int x{ }; 
    cin >> x;
    
    while (x != 1) 
    {
        if (x % 2 == 0) 
        {
            x = x/2;
            count++;
        }

        else
        {
            x = x*3+1;
            count++;
        }
    }
    
    printf ("It took %d steps to reach one.", count);
    return 0;
}