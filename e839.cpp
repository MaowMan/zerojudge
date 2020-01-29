#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

void print(std::vector <std::string> &data){
    for(int i=0;i<data.size();i++){
        std::cout<<data[i]<<std::endl;
    }
}

int main(){
    int n;
    std::cin>>n;
    std::map < std::string , std::vector < std::string> > data;
    for(int i=0;i<n;i++){
        std::string a,b;
        std::cin>>a>>b;
        if (data.count(b)){
            data[b].push_back(a);
        }
        else{
            std::vector<std::string> blank;
            blank.push_back(a);
            data[b]=blank;
        }
    }
    std::string req;
    std::cin>>req;
    if (data.count(req)){
        std::sort(data[req].begin(),data[req].end());
        print(data[req]);
    }
    else{
        std::cout<<"No"<<std::endl;
    }
}
