#include <iostream>

int main(){

    std::string daysInMonth[12] = {"31", "28/29", "31", "30", "31", "30", "31", "31", "30", "31", "30", "31"};

    std::cout << "Zapis cislo mesiaca: ";

    int month;
    std::cin >> month;

    if(month < 1 || month > 12){
        std::cout << "Zle zadany mesiac";
    }
    else{
        std::cout << month << ". mesiac ma " << daysInMonth[month - 1] << " dni";
    }

    return 0;
}