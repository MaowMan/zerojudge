#include <vector>
#include <iostream>

int64_t gcd(int64_t a,int64_t b){
    if(b==0) {
        return a;
    }
    else {
        return gcd(b,a%b);
    }
}
int main(){
    std::vector<int64_t> data(50);
    data[0]=0;
    data[1]=1;
    for(int i=2;i<50;i++){
        data[i]=data[i-1]+data[i-2];
    }
    int n;
    std::cin>>n;
    int64_t cache=gcd(data[n+1],data[n]);
    std::cout<<data[n]/cache<<':'<<data[n+1]/cache<<std::endl;

}

