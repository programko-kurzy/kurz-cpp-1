#include <string>
#include <iostream>

int main(){
    const std::string nickname = "Matej";
    const std::string password = "slabeHeslo123";

    std::string userNickname;
    std::cout << "Prosim zadaj prihlasovacie meno: ";
    std::cin >> userNickname;

    std::string userPassword;
    std::cout << "Prosim zadaj heslo: ";
    std::cin >> userPassword;

    if(userNickname == nickname && userPassword == password){
        std::cout << "UZIVATEL PRIHLASENY";
    }
    else{
        std::cout << "NEEXISTUJUCI UZIVATEL";
    }

    return 0;
}