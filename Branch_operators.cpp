#include <iostream>

int main(){
    int n1,n2,n3;
        std :: cin >> n1;
        std :: cin >> n2;
        std :: cin >> n3;
        if (n1>0){
            n1 = (n1*2);
            n2 = (n2*3);
            n3 = (n3*2);
            std::cout <<"n1=" <<n1 <<"n2=" <<n2 <<"n3=" <<n3 << "/n";
        }else{
            std::cout <<"success" << "/n";
        }
        if (n1>1){
            int failure=0;
            failure=(n1+n2+n3)/3;
                    std::cout <<"failure";
        }
}
