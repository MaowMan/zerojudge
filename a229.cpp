#include <iostream>
#include <string>

struct node{
    int target;
    int left;
    int right;
    std::string str;
};

void dfs(struct node n){
    if(n.left==n.target){
        if(n.right==n.target){
            std::cout<<n.str<<'\n';
        }
        else{
            n.right+=1;
            n.str.push_back(')');
            dfs(n);
        }
    }
    else{
        if(n.left==n.right){
            n.left+=1;
            n.str.push_back('(');
            dfs(n);
        }
        else{
            n.left+=1;
            n.str.push_back('(');
            dfs(n);
            n.left-=1;
            n.right+=1;
            n.str[n.str.size()-1]=')';
            dfs(n);
        }
    }
}


int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int n;
    while(std::cin>>n){
        struct node blank;
        blank.target=n;
        blank.right=0;
        blank.left=0;
        dfs(blank);
        //std::cout<<'\n';
    }
    return 0;
}
