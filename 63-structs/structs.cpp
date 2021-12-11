#include <iostream>

struct student
{
    char name[50];
    int id;
    float mark;
} students[5];

int main(){

    std::cout << "Enter information for students: \n";

    for (int i = 1; i < (sizeof(students) / sizeof (students[0]))+1; i++){
        int n = i-1;
        students[n].id = i;
        std::cout << "Student " << i << "\n";
        std::cout << "Name: ";
        std::cin >> students[n].name;
        std::cout << "Mark: ";
        std::cin >> students[n].mark;
    }
    std::cout << "\n\n--Student Info--\n";
    std::cout << "----------------------------\n";
    for (int i = 0; i < (sizeof(students) / sizeof(students[0])); i++){
        std::cout << "Student ID: " << students[i].id << "\n";
        std::cout << "Student Name: " << students[i].name << "\n";
        std::cout << "Student Mark: " << students[i].mark << "\n";
        std::cout << "----------------------------\n";

    }
    return 0;
}
