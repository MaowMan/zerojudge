#include <iostream>

int main(){
    int a,b,c;
    while(std::cin>>a>>b>>c){
        std::cout<<a/b<<'.';
        for(int i=0;i<c;i++){
            a=(a%b)*10;
            std::cout<<a/b;
        }
        std::cout<<std::endl;
    }
    return 0;
}
