#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

struct node{
    int n;
    std::vector<int> childs;
};

struct result{
    std::vector<int> path;
};


bool cmp(struct result a,struct result b){
    return a.path.back()<b.path.back();
}
void expand (std::vector <struct node> &data,std::set <int> &log , int a, int b){
    int son;
    if(log.count(a)){
        for(int i=0;i<data.size();i++){
            if(data[i].n==a){
                son=i;
                break;
            }
        }
    }
    else{
        struct node n;
        n.n=a;
        data.push_back(n);
        son=data.size()-1;
        log.insert(a);
    }
    if(log.count(b)){
        for(int i=0;i<data.size();i++){
            if(data[i].n==b){
                data[i].childs.push_back(son);
                break;
            }
        }
    }
    else{
        struct node n;
        n.n=b;
        n.childs.push_back(son);
        data.push_back(n);
        log.insert(b);
    }
    //std::cout<<"tree size:"<<data.size()<<std::endl;
}
void inspect(std::vector<struct node> &data){
    for(int i=0;i<data.size();i++){
        //std::cout<<"node n="<<data[i].n<<" child_size:"<<data[i].childs.size()<<std::endl;
    }
}

void solve(std::vector<struct result> &res,std::vector<struct node> &data,int now,struct result temp){
    temp.path.push_back(data[now].n);
    if (data[now].childs.size()==0){
        res.push_back(temp);
    }
    else{
        for(int i=0;i<data[now].childs.size();i++){
            solve(res,data,data[now].childs[i],temp);
        }
    }
}

void print(std::vector <struct result> &res){
    for(int i=0;i<res.size();i++){
        if(res[i].path.size()<=3){
            std::cout<<res[i].path.back()<<":N";
        }
        else{
            std::cout<<res[i].path.back()<<":{";
            for(int k = res[i].path.size()-2;k>1;k--){
                std::cout<<res[i].path[k];
                if (k==2){
                    std::cout<<'}';
                }
                else{
                    std::cout<<',';
                }
            }

        }
        std::cout<<std::endl;
    }
}

int main(){
    int n;
    std::cin>>n;
    for(int i=0;i<n;i++){
        std::vector< struct node > data;
        std::set < int > log;
        int r;
        std::cin>>r;
        for(int k=0;k<r;k++){
            int a,b;
            char chr;
            std::cin>>a>>chr>>b;
            expand(data,log,a,b);
        }
        std::vector<struct result> res;
        int root;
        for(int k=0;k<data.size();k++){
            if(data[k].n==99){
                root=n;
                break;
            }
        }
        struct result temp;
        solve(res,data,root,temp);
        //std::sort(res.begin(),res.end(),cmp);
        //print(res);

    }
}
