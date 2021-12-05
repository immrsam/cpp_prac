#include <iostream>

int main() {
    int a = 3, b = 7;


    std::cout << "before swap: a = " << a << " b = " << b << "\n";

    a = a + b;
    b = a - b;
    a = a - b;

    std::cout << "after swap: a = " << a << " b = " << b << "\n";
    return 0;
}
