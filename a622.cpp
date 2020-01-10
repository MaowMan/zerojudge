#include <vector>
#include <string>
#include <iostream>

int main(){
    std::vector<std::string> data;
    std::string str;
    std::string blank;
    int maxlen = -1;
    while(std::getline(std::cin,str)){
        if(str=="END"){
            data.pop_back();
            std::cout<<"maxlen:"<<maxlen<<std::endl;
            for(int i=0;i<maxlen;i++){
                for(int k=0;k<data.size();k++){
                    if(i>=data[k].size()){
                        std::cout<<' ';
                    }
                    else{
                        std::cout<<data[k][i];
                    }
                }
                std::cout<<std::endl;
            }
            return 0;
        }
        else{
            std::cout<<str.size()<<std::endl;
            if(str.size()>maxlen){
                std::cout<<"yep"<<std::endl;
                maxlen=str.size();
            }
            data.push_back(str);
            data.push_back(blank);
        }
    }
}
