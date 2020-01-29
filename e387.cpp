#include <iostream>
#include <string>
#include <vector>
#include <cstdio>

int main(){
    std::string str;
    std::cin>>str;
    std::vector< std::vector < char > > data;
    std::vector < char > blank;
    blank.push_back(str[0]);
    data.push_back(blank);
    for(int i=1;i<str.size();i++){
        if(int(str[i])==int(data.back().back())+1){
            //std::cout<<"consistent"<<std::endl;
            data.back().push_back(str[i]);
        }
        else{
            std::vector<char> cache;
            cache.push_back(str[i]);
            data.push_back(cache);
        }
    }
    int maxlocation=0;
    for (int i=1;i<data.size();i++){
        if(data[i].size()>=data[maxlocation].size()){
            maxlocation=i;
        }
    }
    std::cout<<data[maxlocation].size()<<' ';
    for(int i=0;i<data[maxlocation].size();i++){
        putchar(data[maxlocation][i]);
    }
    putchar('\n');
    return 0;

}
