#include <iostream>
#include <vector>
#include <string>

void print(std::vector<std::string> &data){
    for(int i=0;i<data.size();i++){
        std::cout<<data[i]<<std::endl;
    }
}

void paint(int x,int y,std::vector<std::string> &data){
    if(data[y][x]=='+'){
        return;
    }
    else{
        data[y][x]='+';
        //print(data);
        if(x!=0){
            paint(x-1,y,data);
        }
        if(y!=0){
            paint(x,y-1,data);
        }
        if(x!=data.size()-1){
            paint(x+1,y,data);
        }
        if(y!=data.size()-1){
            paint(x,y+1,data);
        }
    }
}



int main(){
    int n;
    std::cin>>n;
    std::vector<std::string> data(n);
    for(int i=0;i<data.size();i++){
        std::cin>>data[i];
    }
    //std::cout<<"map completed"<<std::endl;
    int x,y;
    std::cin>>y>>x;
    paint(x,y,data);
    print(data);

}
