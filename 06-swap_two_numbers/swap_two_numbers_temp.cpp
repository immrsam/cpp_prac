#include <iostream>

int main() {
    int a = 5, b = 9, temp;


    std::cout << "before swap: a = " << a << " b = " << b << "\n";

    temp = a;
    a = b;
    b = temp;

    std::cout << "after swap: a = " << a << " b = " << b << "\n";
    return 0;
}
