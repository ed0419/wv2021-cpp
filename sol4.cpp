#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int h=0;
    cin>>h;
    for(int i=0;i<h;i++){
        for(int j=0-h;j<h+1;j++){
            if (i>=abs(j) and j>=abs(j)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}