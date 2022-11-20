#include <iostream>

int main(){
    int n1, n2, n3;
    std::cin >>n1 >>n2 >>n3;
    if (n1>n2 || n2>n3){
        n1=n1*5;
        n2=n2*5;
        n3=n3*3;
        std::cout <<"n1=" <<n1 <<"n2=" <<n2 <<"n3=" <<n3 <<std::"/n";
    }else{
        std::cout <<"a and b > c" <<std::"/n";
    }
    if (n3>n1 || n1>n2){
        n1=n1*5;
        n2=n2*3;
        n3=n3*5;
        std::cout <<"n1=" <<n1 <<"n2=" <<n2 <<"n3=" <<n3 <<std::"/n";
    }else{
        std::cout <<"a and c > b" <<std::"/n";
    }
}
