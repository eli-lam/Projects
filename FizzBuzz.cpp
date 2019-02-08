#include <iostream>

int main(){
    int count = 1;

    for(count; count<101; count++){
        if (count % 3 == 0 && count % 5 == 0)
            std::cout << "FizzBuzz ";
        else if (count % 3 == 0)
            std::cout << "Fizz ";
        else if (count % 5 == 0)
            std::cout << "Buzz ";
        else
            std::cout << count << " ";
    }
}