#include <vector>
#include <iostream>

int main(){
    std::vector<int_fast16_t> data;
    for(int i=1;i<500;i++){
        for(int k=0;k<4;k++){
            for(int r=0;r<i;r++){
                data.push_back(k);
            }
        }
    }
    //std::cout<<data.size();
    int n;
    while(std::cin>>n){
        if(data[n]==0){
            std::cout<<"Pen"<<std::endl;
        }
        else if(data[n]==1){
            std::cout<<"Pineapple"<<std::endl;
        }
        else if(data[n]==2){
            std::cout<<"Apple"<<std::endl;
        }
        else if(data[n]==3){
            std::cout<<"Pineapple pen"<<std::endl;
        }
        else{
            std::cout<<"error:"<<data[n]<<std::endl;
        }
    }
    return 0;
}
