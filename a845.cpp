#include <iostream>
#include <vector>

int main(){
    int n;
    std::cin>>n;
    std::vector<int> data(n);
    for(int i=0;i<n;i++){
        std::cin>>data[i];
    }
    int t;
    std::cin>>t;
    for(int i=0;i<t;i++){
        int x,y;
        std::cin>>x>>y;
        std::cout<<data[x]+data[y]<<std::endl;
    }
    return 0;
}
