#include <iostream>
#include <cmath>

int main() {
    //
    // ax^2+bx+c = 0 (a, b and c are coefficients)
    //
    //                _____________
    //               /  2
    //      -b += '\/  b   -   4ac
    // x = -------------------------
    //               2a
   
    float a, b, c, x1, x2, discriminant, real, fake;
    std::cout << "Enter coefficients a, b and c: ";
    std::cin >> a >> b >> c;
    discriminant = b*b - 4*a*c;

    if(discriminant > 0){
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);
        std::cout << "Roots are real and different.\n";
        std::cout << "x1 = " << x1 << "\n";
        std::cout << "x2 = " << x2 << "\n";

    }
    else if (discriminant == 0) {
        std::cout << "Roots are real and the same.\n";
        x1 = -b/(2*a);
        std::cout << "x1 = x2 = " << x1 << "\n";
    }

    else{
        real = -b/(2*a);
        fake = sqrt(-discriminant)/(2*a);
        std::cout << "Roots are complex and different.\n";
        std::cout << "x1 = " << real << " + " << fake << " i\n";
        std::cout << "x2 = " << real << " - " << fake << " i\n";
    }

    return 0;
}
