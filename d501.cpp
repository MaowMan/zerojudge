#include <iostream>
#include <vector>
#include <algorithm>


int main(){
    int n;
    while(std::cin>>n){
        std::vector<unsigned long long> data(n);
        for(int i=0;i<data.size();i++){
            std::cin>>data[i];
        }
        std::sort(data.begin(),data.end());
        if(data.size()%2==1){
            std::cout<<"A="<<data[(data.size()-1)/2]<<std::endl;
        }
        else{
            if(data[data.size()/2]==data[data.size()/2-1]){
                std::cout<<"A="<<data[data.size()/2]<<std::endl;
            }
            else{
                std::cout<<"A=";
                for(int i=data[data.size()/2-1];i<=data[data.size()/2];i++){
                    std::cout<<i;
                    if(i==data[data.size()/2]){
                        std::cout<<std::endl;
                    }
                    else{
                        std::cout<<"、";
                    }
                }
            }
        }
    }
}
