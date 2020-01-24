#include <vector>
#include <iostream>
#include <algorithm>

struct node{
    char type;
    bool been_here;
};

int cal(int x,int y,std::vector < std::vector < struct node > > &data , int &height , int &width){
    if (data[y][x].type=='w'||data[y][x].been_here){
        return 0;
    }
    else{
        int res=1;
        data[y][x].been_here=true;
        if (y==0){
            ;
        }
        else{
            res+=cal(x,y-1,data,height,width);
        }
        if (y==height-1){
            ;
        }
        else{
            res+=cal(x,y+1,data,height,width);
        }
        if (x==0){
            res+=cal(width-1,y,data,height,width);
        }
        else{
            res+=cal(x-1,y,data,height,width);
        }
        if (x==width-1){
            res+=cal(0,y,data,height,width);
        }
        else{
            res+=cal(x+1,y,data,height,width);
        }
        return res;
    }
}

int solve(std::vector < std::vector < struct node > > &data,int &height , int &width){
    std::vector<int> res;
    for(int y=0;y<height;y++){
        for(int x=0;x<width;x++){
            if (data[y][x].type!='w'){
                res.push_back(cal(x,y,data,height,width));
            }
        }
    }
    std::sort(res.begin(),res.end());
    return res.back();
}

int main(){
    int height,width;
    while(std::cin>>width>>height){
        std::vector <std::vector<struct node> > data;
        std::vector < struct node> row(width);
        for(int i=0;i<width;i++){
            row[i].been_here=false;
        }
        for(int i=0;i<height;i++){
            data.push_back(row);
        }
        for(int i=0;i<height;i++){
            for(int k=0;k<width;k++){
                std::cin>>data[i][k].type;
            }
        }
        int x,y;
        std::cin>>x>>y;
        std::cout<<solve(data,height,width)<<std::endl;
    }
}
