#include <iostream>
#include <cmath>

int main()
{
    float x,y;
    std :: cout << "x = ";
    std :: cin >> x;
    if(x>5)
    {
        y = 2*x*x + 10;
        std :: cout << "y = " << y << std :: endl;
    }
    else if (x == 0)
    {
        y = 0;
        std :: cout << "y = " << y << std :: endl;
    }
    else if (x<5)
    {
        y = 2* std :: abs(x + 6) - x*x;
        std :: cout << "y = " << y << std :: endl;
    }
    return 0;
}
