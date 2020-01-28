#include <iostream>
#include <vector>
#include <set>
struct node{
    int n;
    std::vector<int> childs;
};


bool solve(std::vector<struct node> &data, std::set<int> &been , int now , int stop ){
    if(been.count(now)||data[now].childs.size()==0){
        return false;
    }
    been.insert(now);
    if (now==stop){
        return true;
    }
    else{
        for(int i=0;i<data[now].childs.size();i++){
            if (solve(data,been,data[now].childs[i],stop)){
                return true;
            }
        }
        return false;
    }
}





int main(){
    int a,b;
    while(std::cin>>a>>b){
        std::vector<struct node> data(a);
        for(int i=0;i<data.size();i++){
            data[i].n=i+1;
        }
        for(int i=0;i<b;i++){
            int from,to;
            std::cin>>from>>to;
            data[from-1].childs.push_back(to-1);
        }
        int start,stop;
        std::cin>>start>>stop;
        std::set<int> been;
        if (solve(data,been,start-1,stop-1)){
            std::cout<<"Yes!!!"<<std::endl;
        }
        else{
            std::cout<<"No!!!"<<std::endl;
        }
    }

}
