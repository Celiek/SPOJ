// 3 podejście do silni
#include <iostream>
#include <stdio.h>
#include <cmath>

int silnia(int a)
{
    int pomocnicza = 1;
    for (int i = 1; i <= a; i++)
    {
        pomocnicza *= i;
    }
    return pomocnicza;
}

int main()
{
    int p;     //ilosc prob
    int wynik; //wynik
    int sumadz = 0;
    int sumaj = 0;

    std::cin >> p;

    for (int i = 0; i < p; i++)
    {
        int a = 0; //ilosc liczb
        std::cin >> a;
        wynik = silnia(a);

        if (a > 9)
            std::cout << 0 << " " << 0 << std::endl;
        else
        {
            sumadz = floor(fmod(wynik, 100) / 10);
            sumaj = wynik % 10;
            std::cout << sumadz << " " << sumaj << std::endl;
        }
    }

    return 0;
}
