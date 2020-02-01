#include <iostream>
#include <algorithm>
bool inside(int a,int b,int n){
    if (a<b){
        std::swap(a,b);
    }
    return (a>n&&n>b);
}
bool same(bool a,bool b){
    if((a&&b)||(!a&&!b)){
        return true;
    }
    else{
        return false;
    }
}

bool collide(int a1,int b1,int a2,int b2){
    if(a1<b1){
        std::swap(a1,b1);
    }
    if(a2<b2){
        std::swap(a2,b2);
    }
    if(same(inside(a1,b1,a2),inside(a1,b1,b2))){
        return false;
    }
    else{
        return true;
    }
}


int cal(int n){
    if (n==1){
        return 1;
    }

}

int main(){
    int a1,b1,a2,b2;
    while(std::cin>>a1>>b1>>a2>>b2){
        if(collide(a1,b1,a2,b2)){
            std::cout<<"collide"<<std::endl;
        }
        else{
            std::cout<<"not collide"<<std::endl;
        }
    }
}
