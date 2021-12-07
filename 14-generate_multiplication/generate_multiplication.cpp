#include <iostream>

int main() {
    int n;

    std::cout << "Enter a positive integer: ";
    std::cin >> n;
    std::cout << "---------------------------\n";
    std::cout << "Multiplication table for " << n << "\n";
    std::cout << "---------------------------\n";
    for (int i = 1; i <= 12; i++){
        std::cout << n << " * " << i << " = " << n * i << "\n";
    }


    return 0;
}
