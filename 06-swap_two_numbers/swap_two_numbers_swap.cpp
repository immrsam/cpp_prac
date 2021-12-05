#include <iostream>

int main() {
    int a = 66, b = 77;


    std::cout << "before swap: a = " << a << " b = " << b << "\n";
    
    std::swap(a, b);

    std::cout << "after swap: a = " << a << " b = " << b << "\n";
    return 0;
}
