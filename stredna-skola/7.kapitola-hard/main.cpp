
#include <iostream>
#include <string>

int getNumber(){
    std::cout << "Zadaj cislo: ";
    int number;
    std::cin >> number;

    return number;
}


std::string getMathOperation(){
    std::cout << "Zadaj matematicku operaciu: ";
    std::string mathOperation;
    getline(std::cin, mathOperation);

    return mathOperation;
}

bool isMathOperation(std::string mathOperation){
    if(mathOperation == "+" || mathOperation == "-" || mathOperation == "*" || mathOperation == "/" || mathOperation == "^"){
        return true;
    }

    return false;
}

int plus(int number1, int number2){
    return number1 + number2;
}

int minus(int number1, int number2){
    return number1 - number2;
}

int multiply(int number1, int number2){
    return number1 * number2;
}

double divide(int number1, int number2){
    return number1 / number2;
}

int power(int number1, int number2){
    return number1 ^ number2;
}

double calculate(int number1, int number2, std::string mathOperation){
    if(mathOperation == "+"){
        return plus(number1, number2);
    }
    else if(mathOperation == "-"){
        return minus(number1, number2);
    }
    else if(mathOperation == "*"){
        return multiply(number1, number2);
    }
    else if(mathOperation == "/"){
        return divide(number1, number2);
    }
    else if(mathOperation == "^"){
        return power(number1, number2);
    }
}

int main(){
    int firstNumber = getNumber();

    std::string mathOperation;
    do{
        mathOperation = getMathOperation();
    }while(!isMathOperation(mathOperation));

    int secondNumber = getNumber();

    double result = calculate(firstNumber, secondNumber, mathOperation);

    std::cout << result;

    return 0;
}