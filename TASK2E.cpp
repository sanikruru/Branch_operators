#include <iostream>
#include <cmath>

int main()
{
    const float r = 1;
    float x,y;
    std :: cout << "x = ";
    std :: cin >> x;
    std :: cout << "y = ";
    std :: cin >> y;
    float R = sqrt(x*x+y*y);
    bool area1 = (x>=0);
    bool area2 = (y>=(-x));
    if((R < r) && area1 || (R < r) && area2)
    {
        std :: cout << "Yes" << std :: endl;
    }
    else
    {
        std :: cout << "No" << std :: endl;
    }
    return 0;
}
