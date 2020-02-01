#include <iostream>
#include <vector>
#include <algorithm>

struct node{
    int name;
    int money;
};

bool cmp(struct node a,struct node b){
    if(a.money==b.money){
        return a.name<b.name;
    }
    else{
        return a.money>b.money;
    }
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int a,b;
    std::cin>>a>>b;
    std::vector<struct node> data(a);
    for(int i=0;i<a;i++){
        data[i].name=i;
        data[i].money=0;
    }
    for(int i=0;i<b;i++){
        int x,y;
        std::cin>>x>>y;
        data[x].money+=y;
    }
    std::sort(data.begin(),data.end(),cmp);
    for(int i=0;i<a;i++){
        std::cout<<data[i].name<<' '<<data[i].money<<'\n';
    }
    return 0;
}
