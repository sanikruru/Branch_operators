#include <iostream>
#include <cmath>

int main (){
    int a,b,b1;
        std :: cin >> a;
        std :: cin >> b;
    if (a<-1) {
        b1 = (abs(a)+(a*5));
        std :: cout <<"b1= " << b1;
    }else{
        std :: cout <<"error";
    }
}
