#include <iostream>
#include <vector>

void print(std::vector<int> &data){
    for(int i=0;i<data.size();i++){
        std::cout<<data[i]<<' ';
    }
    std::cout<<std::endl;
}

void middle(std::vector<int> &data){
    if (data.size()%2==1){
        std::cout<<data[(data.size()-1)/2]<<std::endl;
    }
    else{
        std::cout<<(data[data.size()/2]+data[data.size()/2-1])/2<<std::endl;
    }
}


int main(){
    int n;
    std::vector<int> data;
    while(std::cin>>n){
        if (data.empty()){
            data.push_back(n);
        }
        else if (data.size()==1){
            if (n>data[0]){
                data.push_back(n);
            }
            else{
                data.insert(data.begin(),n);
            }
        }
        else{
            if (n>data[data.size()-1]){
                data.push_back(n);
            }
            else if(n<data[0]){
                data.insert(data.begin(),n);
            }
            else{
                for(int i=0;i<data.size();i++){
                    if (n>=data[i]&&n<=data[i+1]){
                        data.insert(data.begin()+(i+1),n);
                        //std::cout<<"inserted"<<std::endl;
                        break;
                    }
                }
            }
        }
        print(data);
        middle(data);
    }
}

