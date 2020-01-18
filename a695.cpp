#include <iostream>
#include <cmath>
int main(){
    unsigned long long n;
    std::cin>>n;
    unsigned long long res=0;
    while(true){
        if(n==1){
            break;
        }
        else{
            bool flag=true;
            for(unsigned long long i=2;i<std::sqrt(n)+2;i++){
                if(n%i==0){
                    flag=false;
                    if(i>res){
                        res=i;
                    }
                    while(true){
                        if(n%i==0){
                            n=n/i;
                        }
                        else{
                            break;
                        }
                    }
                }
            }
            if(flag=true){
                if(n>res){
                    res=n;
                }
                break;
            }
        }
    }
    std::cout<<res<<std::endl;
}
