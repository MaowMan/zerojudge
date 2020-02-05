#include <iostream>
#include <vector>

int main(){
    int limit=200000;
    std::vector<int> data;
    int a=1,b=17;
    for(int i=0;i<limit;i++){
        a=(a%b)*10;
        if(data.empty()){
            data.push_back(a/b);
        }
        else{
            data.push_back(data.back()+a/b);
        }
    }
    int n;
    std::cin>>n;
    for(int i=0;i<n;i++){
        int tar;
        std::cin>>tar;
        if(tar==1){
            std::cout<<data[0]<<' '<<data[0]<<std::endl;
        }
        else{
            std::cout<<data[tar-1]-data[tar-2]<<' '<<data[tar-1]<<std::endl;
        }
    }
    return 0;
}
