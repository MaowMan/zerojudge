#include <iostream>
#include <string>
#include <vector>


struct memory{
    int ptr;
    std::vector<int> data;
    std::vector<char> commands;
};

int main(){
    std::vector<int> blank(260);
    struct memory sys;
    sys.ptr=0;
    sys.data=blank;
    //std::cout<<sys.data.size()<<std::endl;
    std::string str;
    while(std::cin>>str){
        if(str=="(>OwO)>u~(/OwO)/nya~"){
            sys.commands.push_back('>');
        }
        else if(str=="(>OwO)>u~!(/OwO)/nya~!"){
            sys.commands.push_back('+');
        }
        else if(str=="(>OwO)>u~!!(/OwO)/nya~!!"){
            sys.commands.push_back('<');
        }
        else if(str=="(>OwO)>u~!!!(/OwO)/nya~!!!"){
            sys.commands.push_back('-');
        }
        else if(str=="CHAOS CHAOS!"){
            sys.commands.push_back('[');
        }
        else if(str=="I WANNA CHAOS!"){
            sys.commands.push_back(']');
        }
        else if(str=="Let's\(OwO)/nya~"){
            sys.commands.push_back('.');
        }
        else if(str=="cosmic!"){
            sys.commands.push_back(',');
        }
        else{
            std::cout<<"Error"<<std::endl;
        }
    }

}
