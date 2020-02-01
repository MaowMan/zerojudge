#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>

int main(){
    int a,b;
    std::cin>>a>>b;
    std::vector<char> str(a);
    for(int i=0;i<str.size();i++){
        std::cin>>str[i];
    }
    std::sort(str.begin(),str.end());
    int req;
    for(int i=0;i<b;i++){
        std::cin>>req;
        putchar(str[req-1]);
    }
    putchar('\n');
}
