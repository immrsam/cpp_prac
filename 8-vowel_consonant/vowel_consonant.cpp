#include <iostream>

int main() {
    char c;
    bool isLowercaseVowel, isUppercaseVowel;

    std::cout << "Enter a single letter: ";
    std::cin >> c;

    isUppercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    isLowercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    
    if (!isalpha(c))
        std::cout << "Not an alphabet letter!\n";
    else if (isUppercaseVowel || isLowercaseVowel)
        std::cout << c << " is a vowel\n";
    else
        std::cout << c << " is a consonant.\n";

    return 0;
}
