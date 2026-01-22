#include <iostream>
using namespace std;

void clearLastIBits(int num,int i){
    int bitmask = ((~0)<<i);
    num = num & bitmask;
    cout<<num;
}

int main(){
    clearLastIBits(15,2);
    return 0;
}