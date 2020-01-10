#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    int n;
    while(std::cin>>n){
        std::vector<int> data(n);
        for(int i=0;i<n;i++){
            std::cin>>data[i];
        }
        std::sort(data.begin(),data.end());
        for(int i=0;i<n;i++){
            std::cout<<data[i];
            if(i==n-1){
                std::cout<<std::endl;
            }
            else{
                std::cout<<' ';
            }
        }
        int resa=-1,resb=-1;
        for(int i=0;i<n;i++){
            if(data[i]<60){
                resa=data[i];
            }
            else{
                break;
            }
        }
        if(resa==-1){
            std::cout<<"best case"<<std::endl;
        }
        else{
            std::cout<<resa<<std::endl;
        }
        for(int i=n-1;i>-1;i--){
            if(data[i]>=60){
                resb=data[i];
            }
            else{
                break;
            }
        }
        if(resb==-1){
            std::cout<<"worst case"<<std::endl;
        }
        else{
            std::cout<<resb<<std::endl;
        }
    }
}
