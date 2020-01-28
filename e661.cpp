#include <iostream>

int main(){
    int n;
    std::cin>>n;
    for(int i=0;i<n;i++){
        int k;
        std::cin>>k;
        if (k%2==0){
            std::cout<<"error"<<std::endl;
            int cache;
            for(int r=0;r<k;r++){
                std::cin>>cache;
            }
        }
        else{
            int cache;
            for(int r=0;r<k;r++){
                std::cin>>cache;
                if(r==(k-1)/2){
                    std::cout<<"Case "<<i+1<<": "<<cache<<std::endl;
                }
            }
        }
    }
    return 0;
}
