#include <iostream>

int checkPrimeNumber(int);

int main (){
    int n1, n2;
    bool flag;

    std::cout << "Enter 2 positive integers: \n";
    std::cin >> n1 >> n2;

    if (n1 > n2)
        std::swap(n1, n2);

    std::cout << "Prime numbers between " << n1 << " & " << n2 << "\n";

    for (int i = n1 + 1; i < n2; i++){
        flag = checkPrimeNumber(i);

        if (flag)
            std::cout << i << "\n";
    }

    return 0;
}

int checkPrimeNumber(int n){
    bool isPrime = true;

    if (n == 0 || n == 1)
        isPrime = false;
    else {
        for (int j = 2; j <= n/2; j++){
            if(n%j == 0) {
                isPrime = false;
                break;
            }
        }
    }

    return isPrime;
}
