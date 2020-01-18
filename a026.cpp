#include <iostream>
#include <vector>

int main(){
    int m,n,r;
    std::cin>>m>>n>>r;
    std::vector<int> row(m);
    std::vector<std::vector<int> > data(n);
    for(int i=0;i<n;i++){
        data[i]=row;
    }
    for(int i=0;i<n;i++){
        for(int k=0;k<m;k++){
            std::cin>>data[i][k];
        }
    }
    int res=0;
    for(int i=0;i<n-r+1;i++){
        for(int k=0;k<m-r+1;k++){
            //std::cout<<"starting point:"<<i<<' '<<k<<std::endl;
            int sum=0;
            for(int x=0;x<r;x++){
                for(int y=0;y<r;y++){
                    sum+=data[i+x][k+y];
                }
            }
            if(sum>res){
                res=sum;
            }
        }
    }
    std::cout<<res<<std::endl;
}
