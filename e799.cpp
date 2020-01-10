#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>

int main(){
    int w,h;
    char sym;
    std::cin>>h>>w>>sym;
    std::vector<int64_t> tar(w);
    tar[0]=1;
    for(int i=1;i<w;i++){
        tar[i]=tar[i-1]<<1;
    }
    std::reverse(tar.begin(),tar.end());
    for(int i=0;i<h;i++){
        int64_t input;
        std::cin>>input;
        for(int k=0;k<w;k++){
            if(input>=tar[k]){
                putchar(sym);
                input-=tar[k];
            }
            else{
                putchar('.');
            }
            putchar(' ');
        }
        putchar('\n');
    }
    return 0;
}
