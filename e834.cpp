#include <iostream>
#include <vector>

int main(){
    int n;
    std::cin>>n;
    std::vector<int> data;
    int cache;
    while(std::cin>>cache){
        if(cache==0){
            break;
        }
        else{
            data.push_back(cache);
        }
    }
    for(int i=0;i<data.size();i++){
        if(data[i]%n==0){
            std::cout<<data[i]/n<<std::endl;
        }
        else{
            std::cout<<n-(data[i]%n)<<std::endl;
        }
    }
}
