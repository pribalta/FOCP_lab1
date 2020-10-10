#include <iostream>

int main (){

    int total_money;
    int banknote_value;

    std::cout << "Please introduce an amount of money:" << std::endl;

    std::cin >> total_money;

    int banknotes = 0;

    for (banknotes = 0; total_money >= 50; banknotes++) {
        total_money = total_money - 50;
    }

    std::cout << "Number of banknotes: " << banknotes << std::endl;

    return 0;
}