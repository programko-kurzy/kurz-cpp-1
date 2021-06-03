#include <iostream>

int main() {

    std::string name;
    std::cout << "Zadaj meno:\n";
    std::cin >> name;

    int number;
    std::cout << "Zadaj cislo:\n";
    std::cin >> number;
    
    //std::cin.fail() nám vráti true, pokiaľ nastala chyba pri čítaní používateľského vstupu
    while(std::cin.fail() || number < 1){
        
        //pomocou nasledujúcich dvoch funkcií vyčistíme std::cin po chybe
        std::cin.clear();
        fflush(stdin);

        std::cout << "Zadaj cislo vacsie ako 0:\n";
        std::cin >> number;
    }

    for (int i = 0; i < number; i++)
    {
        std:: cout << name << "\n";
    }
    
    
    return 0;
}

