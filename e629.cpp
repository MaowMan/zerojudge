#include <iostream>
#include <vector>
#include <cmath>

int cal(int n){
    if(n==2){
        return 3;
    }
    int res=0;
    for(int i=1;i<n+1;i++){
        if(n%i==0){
            res+=i;
        }
    }
    return res;
}

struct node{
    int n;
    int from;
};

int main(){
    int limit=1000;
    std::vector<struct node> data(limit);
    for(int i=0;i<limit;i++){
        data[i].n=i+1;
        data[i].from=-1;
    }
    for(int i=1;i<limit+1;i++){
        int res=cal(i);
        if(res<=limit){
            data[res-1].from=i;
        }
    }
    for(int i=0;i<limit;i++){
        //std::cout<<"n="<<data[i].n<<' '<<"from:"<<data[i].from<<std::endl;
    }

    int req;
    int num=1;
    while(std::cin>>req){
        if(req==0){
            break;
        }
        else{
            std::cout<<"Case "<<num<<": "<<data[req-1].from<<std::endl;
        }
        num+=1;
    }
    return 0;
}

