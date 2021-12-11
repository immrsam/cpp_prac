#include <iostream>

int checkPrimeNumber(long long int);

int main (){
    long long int n1, n2;
    bool flag;

    std::cout << "Enter 2 positive integers: \n";
    std::cin >> n1 >> n2;

    if (n1 > n2)
        std::swap(n1, n2);

    std::cout << "Prime numbers between " << n1 << " & " << n2 << "\n";

    for (long long int i = n1 + 1; i < n2; i++){
        flag = checkPrimeNumber(i);

        if (flag)
            std::cout << i << "\n";
    }

    return 0;
}

int checkPrimeNumber(long long int n){
    bool isPrime = true;

    if (n == 0 || n == 1)
        isPrime = false;
    else {
        for (long long int j = 2; j <= n/2; j++){
            if(n%j == 0) {
                isPrime = false;
                break;
            }
        }
    }

    return isPrime;
}
