#include <iostream>
using namespace std;

bool isPrime(int val){
    if(val == 1){
        return false;
    }

    for(int i = 2;i*i<=val;i++){
        if(val % i == 0){
            return false;
        }
    }
    return true;
}

void primeRange(int n){
    for(int i = 1;i<=n;i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
}

int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;

    primeRange(n);
    return 0;
}