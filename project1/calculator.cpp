#include <iostream>
#include <string>

int main()
{

    std::cout << "\n\nVitaj, som tvoja kaluklačka. \n";


    /*
        NACITANIE PRVEHO CISLA
    */

    //nacitat cislo
    std::cout << "Zadaj prvé číslo: ";
    double firstNumber;
    std::cin >> firstNumber;

    //PYTAT PRVE CISLO POKIAL NEBOLO ZADANE CISLO
    while(std::cin.fail()){

        //vycistit std::cin
        std::cin.clear();
        fflush(stdin);

        //nacitat cislo
        std::cout << "NEVHODNÝ VSTUP. Zadaj prvé číslo: ";
        std::cin >> firstNumber;

    }

    /*
        NACITANIE MATEMATICKE OPERACIE
    */
    
    //vycistit std::cin
    std::cin.clear();
    fflush(stdin);

    //nacitat matematicku operaciu
    std::cout << "Zadaj matematickú operáciu: ";
    char mathOperator;
    std::cin >> mathOperator;


    //PYTAT PLATNU MATEMATICKU OPERACIU
    while(std::cin.fail() || (mathOperator != '+' && mathOperator != '*' && mathOperator != '/' && mathOperator != '*')){

        //vycistit std::cin
        std::cin.clear();
        fflush(stdin);

        //nacitat cislo
        std::cout << "NEVHODNÝ VSTUP. Zadaj matematickú operáciu: ";
        std::cin >> mathOperator;

    }

    /*
        NACITANIE DRUHEHO CISLA
    */

    //vycistit std::cin
    std::cin.clear();
    fflush(stdin);

    //nacitat cislo
    std::cout << "Zadaj druhé číslo: ";
    double secondNumber;
    std::cin >> secondNumber;

    //PYTAT DRUHE CISLO POKIAL NEBOLO ZADANE CISLO
    while(std::cin.fail()){

         //vycistit std::cin
        std::cin.clear();
        fflush(stdin);

        //nacitat cislo
        std::cout << "NEVHODNÝ VSTUP. Zadaj druhé číslo: ";
        std::cin >> secondNumber;

    }


    /*
        VYHODNOTIT MATEMATICKU OPERACIU
    */

    double result;
    if(mathOperator == '+'){
        result = firstNumber + secondNumber;
    }
    else if(mathOperator == '-'){
        result = firstNumber - secondNumber;
    }
    else if(mathOperator == '*'){
        result = firstNumber * secondNumber;
    }
    else if(mathOperator == '/'){
        result = firstNumber / secondNumber;
    }


    /*
        VYPISAT VYSLEDOK
    */

    std::cout << "Výsledok je: " << result << "\n\n\n";


    return 0;
}
