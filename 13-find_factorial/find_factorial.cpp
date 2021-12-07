#include <iostream>

int main(){
    int n;
    long double factorial = 1.0;

    std::cout << "Enter a positive integer: ";
    std::cin >> n;
    
    if(n <0)
        std::cout << "No factorial for negative number.\n";
    else {
        for(int i = 1; i <= n; i++) {
            factorial *= i;
        }
        std::cout << "Factorial of " << n << " = " << factorial << "\n";
    }
    return 0;
}
