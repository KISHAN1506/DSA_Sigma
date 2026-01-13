#include <iostream>
using namespace std;

int main(){
    int num = 6;
    int bit = 1;

    int bitmask = 1<<bit;
    cout<<(num^bitmask)<<endl;
    return 0;
}