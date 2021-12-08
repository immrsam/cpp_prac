#include <iostream>

int main(){
    int n, n1 = 0, n2 = 1, next = 0;
    std::cout << "Enter number of terms: ";
    std::cin >> n;

    for (int i = 1; i <= n; i++){
        if(i == 1){
            std::cout << n1 << ", ";
            continue;
        }
        if(i == 2){
            std::cout << n2 << ", ";
            continue;
        }
        next = n1 + n2;
        n1 = n2;
        n2 = next;

        std::cout << next;
        if (i != n){
            std::cout << ", ";
        }
    }
    std::cout << "\n";
    return 0;
}
