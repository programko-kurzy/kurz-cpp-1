#include <iostream>
#include <string>

int main(){

    std::cout << "Zadaj svoje cele meno: ";
    std::string name;
    getline(std::cin, name);

    std::cout << "Teraz zadaj pocet opakovani: ";
    int count;
    std::cin >> count;

    if(count < 1){
        std::cout << "Neplatny pocet opakovani";
    }
    else{
        for(int index = 0; index < count; index++){
            std::cout << name << "\n";
        }
    }



    return 0;
}