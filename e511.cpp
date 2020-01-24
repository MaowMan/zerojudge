#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

void print (std::vector<int> &data){
    for(int i=0;i<data.size();i++){
        std::cout<<data[i]<<' ';
    }
    std::cout<<std::endl;
}

int cal(std::vector<int> &data ,int perfect){
    int res=0;
    for(int i=0;i<data.size();i++){
        res+=std::abs(perfect-data[i]);
    }
    return res;
}

int def (std::vector<int> &data){
    if (data.size()%2==1){
        return data[(data.size()-1)/2];
    }
    else{
        return (data[data.size()/2]+data[data.size()/2-1])/2;
    }
}

int main(){
    int n;
    std::cin>>n;
    for(int i=0;i<n;i++){
        int k;
        std::cin>>k;
        std::vector<int> data(k);
        for(int r=0;r<k;r++){
            std::cin>>data[r];
        }
        std::sort(data.begin(),data.end());
        print(data);
        int perfect=def(data);
        std::cout<<cal(data,perfect)<<std::endl;
    }
}
