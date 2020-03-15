#include <iostream>
#include <string>

int cal(std::string str){
    if (str[0]=='M'){
        return 0;
    }
    else if (str[0]=='T'){
        if(str[1]=='u'){
            return 1;
        }
        else{
            return 3;
        }
    }
    else if(str[0]=='W'){
        return 2;
    }
    else if(str[0]=='F'){
        return 4;
    }
    else if(str[0]=='S'){
        if(str[1]=='a'){
            return 5;
        }
        else{
            return 6;
        }
    }
    else{
        std::cout<<"Error!"<<std::endl;\
        return 0;
    }
}

std::string convert(int n){
    std::string str("Error");
    if(n==0){
        str="Monday";
    }
    else if(n==1){
        str="Tuesday";
    }
    else if(n==2){
        str="Wednesday";
    }
    else if(n==3){
        str="Thursday";
    }
    else if(n==4){
        str="Friday";
    }
    else if(n==5){
        str="Saturday";
    }
    else if(n==6){
        str="Sunday";
    }
    return str;
}

int main(){
    std::string str;
    int n;
    std::cin>>str>>n;
    int res=((cal(str)+n)%7);
    //std::cout<<"res="<<res<<std::endl;
    std::cout<<convert(res)<<std::endl;
}
