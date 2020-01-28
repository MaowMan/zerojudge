#include <iostream>
#include <vector>

int main(){
    int n;
    while(std::cin>>n){
        std::vector<int> data(n);
        unsigned long long sum=0,res=0;
        for(int i=0;i<n;i++){
            std::cin>>data[i];
            sum+=data[i];
        }
        for(int i=0;i<n;i++){
            res+=(sum-data[i])*data[i];
            sum-=data[i];
        }
        std::cout<<res<<'\n';
    }
}
