#include <iostream>
using namespace std;

void decToBin(int deci){
    int n = deci;
    int bin = 0;
    int pow = 1;

    while(n > 0){
        int rem = n%2;
        bin += rem * pow;
        pow = pow*10;
        n = n/2;
    }
    cout<<bin;
}

int main(){
    int deci;
    cin>>deci;

    decToBin(deci);
    return 0;
}