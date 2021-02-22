#include <iostream>
using namespace std;
int main(){
    int N,i=1;
    cin>>N;
    while(i<=N){
        int j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    i=N-1;
    while(i>=1){
        int j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i--;
    }
    return 0;
}