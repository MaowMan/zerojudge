#include <iostream>
#include <vector>

struct dot{
    long long int x,y;
};

long long int pow(long long int n){
    return n*n;
}

int main(){
    int n;
    std::cin>>n;
    for(int i=0 ;i<n;i++){
        long long int a,b;
        std::cin>>a>>b;
        long long int res=0;
        std::vector<struct dot> data(a+1);
        for(int k=0;k<a+1;k++){
            std::cin>>data[k].x>>data[k].y;
        }
        for(int k=0;k<data.size()-1;k++){
            if(pow(data.back().x-data[k].x)+pow(data.back().y-data[k].y)<=pow(b)){
                res+=1;
            }
        }
        std::cout<<res<<std::endl;
    }
    return 0;
}
