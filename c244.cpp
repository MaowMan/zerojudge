#include <iostream>
#include <algorithm>

unsigned long long dfs(int n,int s1,int v1,int s2,int v2){
    if(n>=s1||n>=s2){
        unsigned long long resa=0,resb=0;
        if(n>=s1){
            resa=v1+dfs(n-s1,s1,v1,s2,v2);
        }
        if(n>=s2){
            resb=v2+dfs(n-s2,s1,v1,s2,v2);
        }
        return std::max(resa,resb);
    }
    else{
        return 0;
    }
}


int main(){
    //std::ios::sync_with_stdio(false);
    //std::cin.tie(0);
    //std::cout.tie(0);
    int t;
    std::cin>>t;
    for(int i=0;i<t;i++){
        int n,s1,v1,s2,v2;
        std::cin>>n>>s1>>v1>>s2>>v2;
        std::cout<<"Case #"<<i+1<<": "<<dfs(n,s1,v1,s2,v2)<<'\n';

    }
}

