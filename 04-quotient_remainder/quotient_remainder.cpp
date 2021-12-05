#include <iostream>

int main (){
    int divisor, dividend, quotient, remainder;
    std::cout << "Enter dividend: ";
    std::cin >> dividend;
    std::cout << "Enter divisor: ";
    std::cin >> divisor;

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    std::cout << "\nQuotient = " << quotient << "\nRemainder = " << remainder << "\n";

    return 0;

}
