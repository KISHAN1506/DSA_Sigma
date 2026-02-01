#include <iostream>
using namespace std;

bool sortedCheck(int arr[],int n){
    if(n == 1){
        return true;
    }

    if(arr[n-1] >= arr[n]){
        return false;
    }

    return sortedCheck(arr,n-1);
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    cout<<sortedCheck(arr,6)<<endl;

    int arr2[] = {1,2,5,4,5,6,7};
    cout<<sortedCheck(arr2,6)<<endl;
    return 0;
}