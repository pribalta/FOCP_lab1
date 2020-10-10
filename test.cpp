#include <iostream>

int main (){

    int total_money;
    int banknote_value;

    std::cout << "Please introduce an amount of money:" << std::endl;

    std::cin >> total_money;

    std::cout << "Please introduce the value of the banknotes:" << std::endl;

    std::cin >> banknote_value;

    int banknotes = 0;

    while(total_money >= banknote_value) {
        total_money = total_money - banknote_value;
        banknotes = banknotes + 1;
    }

    std::cout << "Number of banknotes: " << banknotes << std::endl;

    return 0;
}