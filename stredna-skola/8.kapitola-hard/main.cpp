#include <iostream>
#include <string>

struct Account{
    int pin;
    int money;
};

struct User{
    std::string name;
    int age;
    Account account;
};

int getMoneyChoice(){
    int money;
    
    std::cout << "\nKolko penazi chcete vybrat: ";
    std::cin >> money;

    return money;
}


int withdrawMoney(int userMoney){
    int money = getMoneyChoice();

    if(money < 0){
        std::cout << "\nNEMOZNO ZADAT ZAPORNU SUMU!\n";
        return 0;
    }
    else if(money > userMoney){
        std::cout << "\nNEDOSTATOK PENAZI NA UCTE!\n";
        return 0;
    }
    else{
        std::cout << "\nUSPESNE VYBRATE PENIAZE!\n";
        return money;
    }
}

int executeUserChoice(User user, int choice){
    if(choice == 1){
        std::cout << "\nPeniaze na ucte: " << user.account.money << "\n";
        return 0;
    }
    else if(choice == 2){
        std::cout << "\nMeno: " << user.name << "\n" << "Vek: " << user.age << "\n";
        return 0;
    }
    else if(choice == 3){
        int moneyChange = withdrawMoney(user.account.money);
        return moneyChange;
    }
}

int getUserChoice(){
    int choice;
    
    std::cout << "\nMOZNOSTI" << "\n" << "1 - stav na ucte" << "\n" << "2 - osobne udaje" << "\n" << "3 - vyber penazi" << "\n" << "5 - odhlasit sa" << "\n";
    std::cout << "Pouzit: ";
    std::cin >> choice;

    return choice;
}

bool isChoiceValid(int choice){
    if(choice == 1 || choice == 2 || choice == 3 || choice == 5){
        return true;
    }

    return false;
}

int getValidUserChoice(User user){
    int choice = getUserChoice();

    while (!isChoiceValid(choice)){
        std::cout << "NESPRAVNA VOLBA!" << "\n";
        choice = getUserChoice();
    };

    return choice;
}

void giveUserAccess(User user){
    int choice;

    do{
        choice = getValidUserChoice(user);
        int moneyChange = executeUserChoice(user, choice);
        user.account.money -= moneyChange;
    }while(choice != 5);

    std::cout << "Odhlaseny" << "\n";
}

void logIn(User user){
    int pin;
    int userPin = user.account.pin;
    do{
        std::cout << "Zadaj PIN: ";
        std::cin >> pin;
    }while(pin != userPin);
}

void runProgram(User user){
    logIn(user);
    giveUserAccess(user);
}


int main(){
    Account account = {1111, 5064};
    User user = {"Matej Peluha", 22, account };

    runProgram(user);

    return 0;
}