#include <string>
#include <vector>
#include <iostream>
int main(){
	std::string str;
	while(std::cin>>str){
        if(str=="."){
            return 0;
        }
        else{
            std::vector<int> seq;
            for(int i=1;i*i<str.size()+1;i++){
                if(str.size()%i==0){
                    seq.push_back(i);
                    seq.push_back(str.size()/i);
                }
            }
            for(int i=0;i<seq.size();i++){
                std::string tar,compare;
                tar.assign(str,0,seq[i]);
                //std::cout<<"seq[i]:"<<seq[i]<<std::endl;
                //std::cout<<"tar:"<<tar<<std::endl;
                bool flag=true;
                for(int k=0;k<(str.size()/seq[i]);k++){
                    compare.assign(str,k*seq[i],seq[i]);
                    //std::cout<<tar<<' '<<compare<<std::endl;
                    if(compare!=tar){
                        flag=false;
                        break;
                    }
                }
                if(flag){
                    std::cout<<str.size()/seq[i]<<std::endl;
                    break;
                }
            }
        }
	}
}
