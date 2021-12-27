#include <iostream>

int main () {
    char arr[3][3] = {
        {'a', 'b', 'c'},
        {'1', '2', '3'},
        {'!', '@', '#'}
    };
    int rows = sizeof arr / sizeof arr[0];
    int cols = sizeof arr[0] / sizeof(char);

    for (int i = 0; i < rows; i++){
            for (int x = 0; x < cols; x++){
                
                std::cout << arr[i][x] << " ";
            }
            std::cout << "\n";
    }

	std::cout << "Hello world!\n";
	return 0;
}
