#include <iostream>
#include <cmath>

int main()
{
    float x,y;
    std :: cout << "x = ";
    std :: cin >> x;
    std :: cout << "y = ";
    std :: cin >> y;
    bool area1 = (y <= pow(M_E,x));
    bool area2 = (y <= pow(M_E,(-x)));
    bool area3 = (y >= x*x);
    if(area1 and area2 and area3)
    {
        std :: cout << "success" << std :: endl;
    }
    else
    {
        std :: cout << "failure" << std :: endl;
    }
    return 0;
}
