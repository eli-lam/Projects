/**
 * Fizz Buzz - Write a program that prints the numbers from 1 to 100. But for multiples of three print “Fizz” 
 * instead of the number and for the multiples of five print “Buzz”. For numbers which are multiples of both 
 * three and five print “FizzBuzz”.
 */

#include <iostream>
using namespace std;

int main()
{
    int count = 1;

    for(count; count<101; count++)
    {
        if (count % 3 == 0 && count % 5 == 0)
            cout << "FizzBuzz ";
        else if (count % 3 == 0)
            cout << "Fizz ";
        else if (count % 5 == 0)
            cout << "Buzz ";
        else
            cout << count << " ";
    }

    return 0;
}