#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int *ptr = &a;

    int **pptr = &ptr;
    cout<<&ptr<<endl<<pptr<<endl;

    cout<<**pptr;
    // cout<<ptr<<endl;
    // cout<<&ptr<<endl;
    // cout<<*ptr<<endl;
    return 0;
}