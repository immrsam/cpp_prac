#include <iostream>

char charType(char);

int main() {
    int v = 0, c = 0, d = 0, ws = 0, total = 0;
    char input [500];

    std::cout << "Enter a string with letters, numbers and whitespaces: \n";
    std::cin.getline(input, 500);
    
    for(int i = 0; input[i]!='\0'; i++){
        ++total;
        char x = input[i];
        std::cout << input[i] << " = " << charType(x) << "\n";
        if(charType(x)=='V'){
            ++v;
        }
        else if (charType(x)=='C'){
            ++c;
        }
        else if (charType(x)=='D'){
            ++d;
        }
        else if(charType(x)=='W'){
            ++ws;
        }
    }

    std::cout << "[V]owels: " << v << "\n";
    std::cout << "[C]onsonants: " << c << "\n";
    std::cout << "[D]igits: " << d << "\n";
    std::cout << "[W]hite Spaces: " << ws << "\n";
    std::cout << "Total: " << total << "\n";

    return 0;
}

char charType(char x){
    char returnType;

        if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u' ||
           x=='A' || x=='E' || x=='I' || x=='O' || x=='U'){
            returnType = 'V';
        }
        else if ((x>='a' && x<='z') || (x>='A' && x<='Z')){
            returnType = 'C';
        }
        else if (x>='0' && x<='9'){
            returnType = 'D';
        }
        else if(x==' '){
            returnType = 'W';
        }

    return returnType;
}
