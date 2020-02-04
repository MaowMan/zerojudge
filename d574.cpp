#include <iostream>
#include <string>
#include <sstream>

struct node{
    char ch;
    int n;
};

void print(struct node &sector,std::stringstream &ss){
    ss<<sector.n<<sector.ch;
    return;
}

int main(){
    int n;
    while(std::cin>>n){
        std::string str;
        std::cin>>str;
        std::stringstream ss;
        struct node sector;
        sector.ch=str[0];
        sector.n=1;
        for(int i=1;i<str.size();i++){
            if(str[i]!=sector.ch){
                print(sector,ss);
                sector.ch=str[i];
                sector.n=1;
            }
            else{
                sector.n+=1;
            }
        }
        print(sector,ss);
        if(ss.str().size()<n){
            std::cout<<ss.str()<<std::endl;
        }
        else{
            std::cout<<str<<std::endl;
        }
    }
}
