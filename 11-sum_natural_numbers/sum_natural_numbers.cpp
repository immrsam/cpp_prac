#include <iostream>

int main() {
    int n, sum;

    std::cout << "Enter an integer to calculate the sum too: ";
    std::cin >> n;

    for (int i = 0; i <= n ; i++) {
        sum += i;
    }

    std::cout << "Sum = " << sum << "\n";

    return 0;
}
