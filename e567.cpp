#include <iostream>
#include <vector>

struct command{
    int n;
    int ptr;
};

int trace (std::vector<struct command> &data, int now){
    if(data[now].n==0){
        return trace(data,data[now].ptr);
    }
    else{
        return data[now].n;
    }
}

int main(){
    int n;
    std::cin>>n;
    for(int i=0;i<n;i++){
        int k;
        std::cin>>k;
        int now=0;
        std::vector<struct command> commands(k);
        for(int r=0;r<k;r++){
            std::string str;
            std::cin>>str;
            if(str=="LEFT"){
                commands[r].n=-1;
                commands[r].ptr=-1;
            }
            else if(str=="RIGHT"){
                commands[r].n=1;
                commands[r].ptr=-1;
            }
            else{
                std::cin>>str;
                std::cin>>commands[r].ptr;
                commands[r].ptr-=1;
                commands[r].n=0;
            }
        }
        for(int r=0;r<k;r++){
            commands[r].n=trace(commands,r);
        }
        for(int r=0;r<k;r++){
            now+=commands[r].n;
        }
        std::cout<<now<<std::endl;
    }
    return 0;
}
