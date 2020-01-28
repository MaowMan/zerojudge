#include <iostream>

bool cal(int n){
    while(n%2==0){
        n/=2;
    }
    while(n%5==0){
        n/=5;
    }
    if (n==1){
        return true;
    }
    else{
        return false;
    }
}


int main(){
    int t;
    std::cin>>t;
    for(int k=0;k<t;k++){
        int res=0;
        int n;
        std::cin>>n;
        for(int i=2;i<n+1;i++){
            if(cal(i)){
                res+=1;
            }
        }
        std::cout<<res<<std::endl;
    }
    return 0;
}
