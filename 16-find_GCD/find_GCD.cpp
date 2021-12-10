#include <iostream>

int main(){
    int n1, n2, hcf;
    std::cout << "Enter 2 numbers: \n";
    std::cin >> n1 >> n2;
    
    // swap id n2 is larger
    if (n2 > n1){
        int hold = n1;
        n1 = n2;
        n2 = hold;
    }

    for (int i = 1; i <= n2; i++){
        if (n1 % i == 0 && n2 % i == 0){
            hcf = i;
        }
    }

    std::cout << "Highest common factor = " << hcf << "\n";

    return 0;
}
