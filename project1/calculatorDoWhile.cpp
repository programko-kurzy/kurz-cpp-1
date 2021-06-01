#include <iostream>

int main()
{

    std::cout << "\n\nVitaj, som tvoja kaluklačka. \n";


    /*
        NACITANIE PRVEHO CISLA
    */

    //PYTAT PRVE CISLO POKIAL NEBOLO ZADANE CISLO

    double firstNumber;

    do{

        //vycistit std::cin
        std::cin.clear();
        fflush(stdin);

        //nacitat cislo
        std::cout << "Zadaj prvé číslo: ";
        std::cin >> firstNumber;

    }while(std::cin.fail());



    /*
        NACITANIE MATEMATICKE OPERACIE
    */
    
    //PYTAT PLATNU MATEMATICKU OPERACIU
    char mathOperator;

    do{

        //vycistit std::cin
        std::cin.clear();
        fflush(stdin);

        //nacitat cislo
        std::cout << "Zadaj matematickú operáciu: ";
        std::cin >> mathOperator;

    }while(std::cin.fail() || (mathOperator != '+' && mathOperator != '*' && mathOperator != '/' && mathOperator != '*'));




    /*
        NACITANIE DRUHEHO CISLA
    */


    //PYTAT DRUHE CISLO POKIAL NEBOLO ZADANE CISLO

    double secondNumber;

    do{

         //vycistit std::cin
        std::cin.clear();
        fflush(stdin);

        //nacitat cislo
        std::cout << "Zadaj druhé číslo: ";
        std::cin >> secondNumber;

    }while(std::cin.fail());


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
