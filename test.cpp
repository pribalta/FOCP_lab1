#include <iostream>

int main (){

    int my_number; // Empty variable to store input

    std::cout << "Please introduce a number:" << std::endl;

    std::cin >> my_number; // Read input from cin and put it in variable

    std::cout << "The number you introduced is:" << std::endl;

    std::cout << my_number << std::endl; // print variable using cout

    return 0;
}