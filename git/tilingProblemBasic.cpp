#include<iostream>
using namespace std;

int tiling(int n){
    if(n==1 || n==0){
        return 1;
    }
    return tiling(n-1)+tiling(n-2);
}
int main(){
    cout<<tiling(5);
    return 0;
}