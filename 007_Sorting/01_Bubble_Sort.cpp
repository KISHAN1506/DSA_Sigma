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

    for(int i = 0;i<n;i++){
        int ctr = 0;
        for(int j = 0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                ctr++;
            }
        }
        if(ctr == 0){
            break;
        }

        // to see each pass
        for(int i = 0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }



    return 0;
}