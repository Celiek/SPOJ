//skiełbasiłem kod i pisze od nowa
//powinno działać
// kod pobiera liczbe całkowitą robi z niej silnie i wypiosuje ilość dziesiątek i jedności 
#include <iostream>
#include <string>
#include <sstream>


int silnia(int p)
{
    int pomocnicza=1;
    for(int i=1;i<=p; i++)
    {
        pomocnicza *=i;
    }
    return pomocnicza;
}

int main()
{
    int p;
    std::string wynik;
    std::stringstream ss;
    std::cin>>p;
    int dlugosc_inta=0; //dlugosc ciagu znakow
   

    for(int i=0; i < p; i++)
    {
        int a=0;
        std::cin >> a; 
        ss << silnia(a);
        ss >> wynik;


        /*

        for (int j = 0; j < sizeof(wynik); j++)
        {
            dlugosc_inta++;
        }
        */

        if (a > 4)
        {
            std::cout << wynik[1] << " ";
            std::cout << wynik[2] << std::endl;
        }

        else
        {
            std::cout << 0 << " ";
            std::cout << wynik << std::endl;
        }

       // std::cout << wynik << std::endl;
    }

    /*
    for(int i=0 ; i< sizeof(wynik); i++)
    {
        dlugosc_inta++;
    }
    

   // std::cout << dlugosc_inta/8 <<std::endl;   

    if(p > 3)
    {
        std::cout<<wynik[1] << " ";
        std::cout<<wynik[2];
    }

    if(p <= 3)
    {
        std::cout<<0 <<" ";
        std::cout<<wynik;
    }
    
    */


    return 0;
}