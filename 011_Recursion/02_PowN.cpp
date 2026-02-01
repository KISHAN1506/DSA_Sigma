#include <iostream>
using namespace std;

int powOpt(int x,int n){
    if(n == 0){
        return 0;
    }
    int halfPow = pow(x,n/2);
    int halfPowSqr = halfPow * halfPow;

    if(n%2 == 1){
        return x*halfPowSqr;
    }
    return halfPow;
}

int main(){
    cout<<powOpt(3,4);

    return 0;
}