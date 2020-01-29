#include <iostream>
#include <vector>

int gen(int n){
    int res=n;
    while(n!=0){
        res+=n%10;
        n/=10;
    }
    return res;
}

struct node{
    int n;
    int from;
};

int main(){
    int limit=100000;
    int big=500000;
    std::vector<struct node> data(limit);
    for(int i=0;i<limit;i++){
        data[i].n=i+1;
        data[i].from=big;
    }
    for(int i=0;i<limit;i++){
        int res=gen(data[i].n);
        if(res>limit){
            continue;
        }
        else{
            if(res<=data[res-1].from){
                data[res-1].from=data[i].n;
            }
        }
    }
    int n;
    std::cin>>n;
    for(int i=0;i<n;i++){
        int req;
        std::cin>>req;
        if(data[req-1].from==big){
            std::cout<<0<<std::endl;
        }
        else{
            std::cout<<data[req-1].from<<std::endl;
        }
    }

}
