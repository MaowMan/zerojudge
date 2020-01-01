#include <iostream>
#include <string>
#include <set>

bool cal(std::string str){
    char target='a';
    if(str.size()==1){
        return false;
    }
    std::set<int> log;
    for(int i=0;i<26;i++){
        int cache=0;
        for(int k=0;k<str.size();k++){
            if(str[k]==target+i){
                cache+=1;
            }
        }
        if (cache==0){
            continue;
        }
        if(log.count(cache)){
            return false;
        }
        else{
            log.insert(cache);
        }
    }
    if (log.size()==1){
        return false;
    }
    return true;
}
int main(){
    int n;
    int counter=0;
    while(std::cin>>n){
        int res=0;
        counter+=1;
        for(int i=0;i<n;i++){
            std::string str;
            std::cin>>str;
            if(cal(str)){
                res+=1;
            }
        }
        std::cout<<"Case "<<counter<<": "<<res<<std::endl;
    }
    return 0;
}
