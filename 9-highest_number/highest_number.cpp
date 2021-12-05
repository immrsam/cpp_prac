#include <iostream>

int main() {
    float n1, n2, n3;
    std::cout << "Enter three numbers: \n";
    std::cin >> n1 >> n2 >> n3;

    if (n1 > n3)
        std::swap(n1, n3);
    if (n1 > n2)
        std::swap(n1, n2);
    if (n2 > n3)
        std::swap(n2, n3);

    std::cout << "----\n1. " << n3 << "\n2. " << n2 << "\n3. " << n1 << "\n";


    return 0;
}
