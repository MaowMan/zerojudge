#include <iostream>
#include <vector>
#include <algorithm>

struct node{
    int n,day;
};

bool cmp(struct node a,struct node b){
    if(a.n==b.n){
        return a.day<b.day;
    }
    else{
        return a.n>b.n;
    }
}
int main(){
    int a,b,day=0;
    std::vector<struct node> data;
    while(std::cin>>a>>b){
        day+=1;
        struct node n;
        n.day=day;
        n.n=a+b;
        data.push_back(n);
    }
    std::sort(data.begin(),data.end(),cmp);
    std::cout<<data[0].day<<std::endl;

}
