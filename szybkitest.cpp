#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << floor((fmod(24, 100)) / 10) << endl;
    cout << 24 % 10 <<'\n'; 
    return 0;
}