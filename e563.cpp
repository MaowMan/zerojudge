#include <iostream>
#include <vector>
#include <algorithm>

struct work{
    int start,over;
};

bool cmp(struct work a, struct work b){
    if (a.over==b.over){
        return a.start>b.start;
    }
    return a.over<b.over;
}

void print(std::vector<struct work> &data){
    for(int i=0;i<data.size();i++){
        std::cout<<'('<<data[i].start<<' '<<data[i].over<<')'<<std::endl;
    }
}

int cal(std::vector<struct work> &data){
    int res=1;
    int ptr=0;
    for(int i=1;i<data.size();i++){
        int start=data[i].start;
        int over=data[i].over;
        if (start>=data[ptr].over){
            ptr=i;
            res+=1;
        }
    }
    return res;
}

int main(){
    int n;
    std::cin>>n;
    for(int i=0;i<n;i++){
        int a,b;
        std::vector<struct work> data;
        while(std::cin>>a>>b){
            if(a==0&&b==0){
                break;
            }
            else{
                struct work w;
                w.start=a;
                w.over=b;
                data.push_back(w);
            }
        }
        std::sort(data.begin(),data.end(),cmp);
        //print(data);
        std::cout<<cal(data)<<std::endl;
    }
}

