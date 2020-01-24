#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>

struct node{
    int a;
    int b;
    std::vector<int> childs;
};

void clone(struct node &a,struct node &b){
    b.a=a.a;
    b.b=a.b;
}

void to_vector (std::vector<int> &data,int target){
    std::vector<int> res;
    while(target!=0){
        res.push_back(target%10);
        target/=10;
    }
    std::reverse(res.begin(),res.end());
    data.insert(data.end(),res.begin(),res.end());

}

void solve (std::vector < struct node > &data , std::set < std::vector<int> > &log , int index, int a_max , int b_max , int target){
    std::vector<int> now;
    to_vector(now,data[index].a);
    now.push_back(-1);
    to_vector(now,data[index].b);
    if (log.count(now)){
        return;
    }
    else{
        log.insert(now);
        struct node next;
        clone(data[index],next);
        if (next.a!=0){
            next.a=0;
            data[index].childs.push_back(data.size());
            data.push_back(next);
            solve(data,log,data.size()-1,a_max,b_max,target);
        }
        clone(data[index],next);
        if (next.b!=0){
            next.b=0;
            data[index].childs.push_back(data.size());
            data.push_back(next);
            solve(data,log,data.size()-1,a_max,b_max,target);
        }
        clone(data[index],next);
        if (next.a!=a_max){
            next.a=a_max;
            data[index].childs.push_back(data.size());
            data.push_back(next);
            solve(data,log,data.size()-1,a_max,b_max,target);
        }
        clone(data[index],next);
        if (next.b!=b_max){
            next.b=b_max;
            data[index].childs.push_back(data.size());
            data.push_back(next);
            solve(data,log,data.size()-1,a_max,b_max,target);
        }
        clone(data[index],next);
        if (next.a!=0){
            if (next.a+next.b<=b_max){
                next.b=next.a+next.b;
                next.a=0;
            }
            else{
                next.a-=b_max-next.b;
                next.b=b_max;
            }
            data[index].childs.push_back(data.size());
            data.push_back(next);
            solve(data,log,data.size()-1,a_max,b_max,target);
        }
        clone(data[index],next);
        if (next.b!=0){
            if(next.b+next.a<=a_max){
                next.a=next.b+next.a;
                next.b=0;
            }
            else{
                next.b-=a_max-next.a;
                next.a=a_max;
            }
            data[index].childs.push_back(data.size());
            data.push_back(next);
            solve(data,log,data.size()-1,a_max,b_max,target);
        }
        return;
    }
}

void solution(std::vector<struct node> &data,int index,int target,int lenth){
    if (data[index].a==target||data[index].b==target){
        std::cout<<lenth<<std::endl;
    }
    else{
        for (int i=0;i<data[index].childs.size();i++){
            solution(data,data[index].childs[i],target,lenth+1);
        }
    }
}

int main(){
    int a_max,b_max,target;
    std::cin>>a_max>>b_max>>target;
    std::vector < struct node > data;
    std::set <std::vector<int> > log;
    struct node root;
    root.a=0;
    root.b=0;
    data.push_back(root);
    solve(data,log,0,a_max,b_max,target);
    solution(data,0,target,0);

}
