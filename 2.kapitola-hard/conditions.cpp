#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{

   const int nasaKonstanta = 5;


   srand(time(0));
   double naseCislo = (rand() % 7) + 1;


    if(++naseCislo == nasaKonstanta && naseCislo <= 5.5 && (naseCislo != 0 || naseCislo == 2)){
       std::cout << "nase cislo je: " << naseCislo; 
    }
    else{
       std::cout << "ine cislo je: " << naseCislo; 
    }
    
    
    return 0;
}

