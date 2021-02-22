#include <iostream>
#include <string>
int main(){
    int i,N;
    std::string stars;
    std::cin>>N;
    for(i=1;i<=N;i++){
        stars = stars + "*";
        std::cout<<stars;
        std::cout<<std::endl;
    }
    for(i=N-1;i>=1;i--){
        stars.erase(i);
        std::cout<<stars;
        std::cout<<std::endl;
    }  
}