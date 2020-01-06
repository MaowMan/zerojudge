#include <iostream>
#include <vector>
#include <algorithm>


void print(std::vector<int_fast16_t> &data){
    std::cout<<"The parity of ";
    for(int i=0;i<data.size();i++){
        std::cout<<data[i];
    }
    std::cout<<" is ";
}
int cal(int n){
    int res=0;
    std::vector<int_fast16_t> data;
    while (n!=0){
        res+=n%2;
        data.push_back(n%2);
        n=n>>1;
    }
    std::reverse(data.begin(),data.end());
    print(data);
    return res;
}

int main(){
    int_fast64_t n;
    while(std::cin>>n){
        if(n==0){
            return 0;
        }
        std::cout<<cal(n)<<" (mod 2)."<<std::endl;
    }
}
