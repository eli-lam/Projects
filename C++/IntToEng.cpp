/**
 *Integer to english number conversion - Write a program that takes an integer and displays the English name of that value. 
 *You should support both positive and negative numbers, in the range supported by a 32-bit integer (approximately -2 billion to 2 billion).
 */
 
#include <iostream>
#include <string>
using namespace std;

string digits[10] = { "", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine" };
string teens[10] = { "", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen" };
string tens[10] = { "", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety" };
string billions[4] = { "", "Thousand", "Million", "Billion" };


string UnderHundred(int num) 
{
    string output = "";

    if (num >= 100) 
    {
        output += digits[num/100] + " Hundred ";
        num %= 100;
    }

    if (num >= 11 && num <= 19)
        output += teens[num-10] + " ";
    else if (num >= 20 || num == 10) 
    {
        output += tens[num/10] + " ";
        num %= 10;
    }

    if (num >= 1 && num <= 9)
        output += digits[num] + " ";

    return output;
}

string TranslateNumber(int num) 
{
    if (num == 0)
        return "Zero";
    else if ( num < 0)
        return "Negative " + TranslateNumber(-1 * num);

    int index = 0;
    string output = "";

    while (num > 0) {
        if (num % 1000 != 0) {
            output = UnderHundred(num % 1000) + billions[index] + " " + output;
        }
        num /= 1000;
        ++index;
    }

    return output;
}

int main() 
{
    int num;
    cout << "Input the number: ";
    cin >> num;
 //   cout << TranslateNumber(num) << endl;

 //   return 0;
}
