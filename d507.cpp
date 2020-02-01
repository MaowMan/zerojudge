#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    std::vector<int> triangle(3);
    for(int i=0;i<triangle.size();i++){
        std::cin>>triangle[i];
    }
    std::sort(triangle.begin(),triangle.end());
    unsigned long long a=triangle[2]*triangle[2] , b=triangle[1]*triangle[1] ,c=triangle[0]*triangle[0];
    if(a>b+c){
        std::cout<<"obtuse triangle"<<std::endl;
    }
    else if (a==b+c){
        std::cout<<"right triangle"<<std::endl;
    }
    else{
        std::cout<<"acute triangle"<<std::endl;
    }
    return 0;
}
