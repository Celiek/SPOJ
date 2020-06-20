//liczby pierwsze spoj

#include <iostream>
#include <cmath>

bool pierwsza(int r)
{
    if (r < 2)
        return false;
        //std::cout << "NIE" << std::endl;
    else
    {
        for (int i = 2; i <= sqrt(r); i++)
        {
            if (r % i == 0)
                return false;
                //std::cout << "NIE" << std::endl;
        }
         return true;
         //std::cout << "TAK" << std::endl;
    }
}


int main()
{
    int n , r;
    std::cin >> n;

    for(int i=1; i<=n; i++)
    {

        std::cin>>r;

       if(pierwsza(r) == true ) std::cout<<"TAK"<<'\n';
       else
       {
           std::cout<<"NIE"<<'\n';
       }
       
    }

    return 0;
}