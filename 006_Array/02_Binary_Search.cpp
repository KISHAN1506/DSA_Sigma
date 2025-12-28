#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of elements :";
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    int low = 0;
    int high = n-1;
    
    int target;
    cout<<"Enter target";
    cin>>target;

    while(low<=high){
        int mid = high+(low-high/2);
        if(arr[mid] > target){
            high = mid - 1;
        }else if(arr[mid] < target){
            low = mid + 1;
        }else if(arr[mid] == target){
            cout<<mid;
            return mid;
        }
    }
    cout<<"-1";
    return 0;
}