#include <vector>
#include <iostream>

int main(){
    int n;
    std::cin>>n;
    std::vector<int> data;
    for(int i=0;i<n;i++){
        int command;
        std::cin>>command;
        if(command==1){
            int tar;
            std::cin>>tar;
            data.push_back(tar);
        }
        else if(command==2){
            if(data.size()==0){
                std::cout<<-1<<std::endl;
            }
            else{
                std::cout<<*data.begin()<<std::endl;
            }
        }
        else if(command==3){
            if(data.size()!=0){
                data.erase(data.begin());
            }
        }
    }
    return 0;
}
