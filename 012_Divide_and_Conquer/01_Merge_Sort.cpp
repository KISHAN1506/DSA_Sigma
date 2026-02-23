#include <iostream>
using namespace std;

void merge(int arr[],int st,int mid,int end){
    vector<int> temp;
    int i = st;
    int j = mid+1;

    while(i<=mid && j<=end){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i++]);
        }else{
            temp.push_back(arr[j++]);
        }
    }

    while(i<=mid){
        temp.push_back(arr[i++]);
    }
    while(j<=end){
        temp.push_back(arr[j++]);
    }

    int x = 0;
    for(int i =st;i<=end;i++){
        arr[i] = temp[x++];
    }
}

void mergeSort(int arr[],int st,int end){
    if(st>=end){
        return;
    }
    int mid = (st+end)/2;
    mergeSort(arr,st,mid);
    mergeSort(arr,mid+1,end);

    merge(arr,st,mid,end);
}

int main(){
    int arr[] = {6,2,4,1,3,8};
    mergeSort(arr,0,5);
    for(int i =0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}