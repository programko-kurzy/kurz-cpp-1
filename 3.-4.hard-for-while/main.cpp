#include <iostream>
#include <string>

int main(){

    std::cout << "Zadaj svoje cele meno: ";
    std::string name;
    getline(std::cin, name);


    int count;

    do{
        std::cout << "Teraz zadaj pocet opakovani: ";
        std::cin >> count;
    }while(count < 1);


     for(int index = 0; index < count; index++){
        std::cout << name << "\n";
    }
    
    return 0;
}