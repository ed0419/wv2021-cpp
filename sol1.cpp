#include <iostream>
void stars(int* i,int j);
int main(){
    int N,i,j;
    std::cin>>N;
    for(i=1;i<=N;i++){
        stars(&i,1);
    }
    for(i=N-1;i>=1;i--){
        stars(&i,1);
    }
    return 0;
}
void stars(int* i,int j){
    for(j=1;j<=*i;j++){
        std::cout<<"*";
    }
    std::cout<<std::endl;
}