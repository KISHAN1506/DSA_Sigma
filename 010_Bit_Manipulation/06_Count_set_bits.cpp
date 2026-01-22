#include <iostream>
using namespace std;

void countSetBits(int num){
    int count = 0;
    while(num != 0){
        if(num % 2 != 0){
            count++;
        }
        num = num>>1;
    }
    cout<<count;
}

int main(){
    countSetBits(11);
    return 0;
}