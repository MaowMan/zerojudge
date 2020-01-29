#include <iostream>
#include <string>
#include <vector>
#include <cstdio>
void print(std::vector<std::string> &data){
    int maxlen=0;
    for(int i=0;i<data.size();i++){
        if(data[i].size()>maxlen){
            maxlen=data[i].size();
        }
    }
    //std::cout<<"maxlen:"<<maxlen<<std::endl;
    for(int i=0;i<maxlen;i++){
        for(int k=0;k<data.size();k++){
            if(i>data[k].size()-1){
                putchar(' ');
            }
            else{
                putchar(data[k][i]);
            }
            if(k==data.size()-1){
                putchar('\n');
            }
            else{
                putchar(' ');
                putchar(' ');
            }
        }
    }
}


int main(){
    std::string str;
    std::vector<std::string> data;
    while(std::getline(std::cin,str)){
        if(str=="END"){
            break;
        }
        data.push_back(str);
    }
    print(data);
    return 0;
}
