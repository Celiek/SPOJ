#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <string.h>

int liczba(int wynik)
{
    int dlugosc = log10(wynik) + 1;

    return dlugosc;
}

int silnia(int p )
{
    int pomocnicza=1;
    for(int i=1; i<=p; i++)
    {
        pomocnicza *=i; 
    }
    return pomocnicza;
}


int main()
{
    int p;
    std::cin>>p;
    std::stringstream ss;
    std::string wynik;
    int pomocnicza = silnia(p);


    ss<<silnia(p);
    ss>>wynik;
    
    pomocnicza = liczba(pomocnicza);
    
        if(sizeof(pomocnicza) > 4)
       { 
           std::cout<<wynik[0]<<" ";
           std::cout << wynik[1];
       }
       if(sizeof(pomocnicza) < 4)
       {
           std::cout <<0;
           std::cout << wynik[0];
       }

       std::cout << sizeof(pomocnicza);
       return 0;
}