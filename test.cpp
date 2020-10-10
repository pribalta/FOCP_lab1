#include <iostream>
#include <array>

int main (){

    std::array<int, 10> data = {58,4,5,6,3,8,2,9,15,7};

    int smallest = data[0];

    for (int i = 0; i < 10; i++) {
        if (data[i] < smallest) {
            smallest = data[i];
        }
    }

    std::cout << "Smallest number is: " << smallest << std::endl;

    return 0;
}