#include <iostream>
#include <string>

int main() {

    std::string name;

    do {
        std::cout << "Zadaj text 'siedma hodina':";
        getline(std::cin, name);
    } while (name != "siedma hodina");
    
    std::cout << "dakujem";
    
    return 0;
}

