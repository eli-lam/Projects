#include <iostream>
using namespace std;

int main(){
    int count = 1;

    for(count; count<101; count++){
        if (count % 3 == 0 && count % 5 == 0)
            cout << "FizzBuzz ";
        else if (count % 3 == 0)
            cout << "Fizz ";
        else if (count % 5 == 0)
            cout << "Buzz ";
        else
            cout << count << " ";
    }
}