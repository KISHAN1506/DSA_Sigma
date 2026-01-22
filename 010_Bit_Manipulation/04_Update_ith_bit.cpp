#include <iostream>
using namespace std;

int updateith(int num,int i,int val){
    //clear bit
    int bitmask = ~(1<<i);
    num = num & bitmask;


    // set bit according to value:
    int bitmask2 = (val<<i);
    num = num | bitmask2;
    return num;
}

int main(){
    cout<<updateith(7,2,0)<<endl;
    cout<<updateith(7,3,1)<<endl;
    return 0;
}