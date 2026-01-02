#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number of elements :";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }


    int max = 0;
    for(int i = 0;i<n;i++){
        if(arr[i]> max){
            max = arr[i];
        }
    }

    int hash[max+1];
    
    for(int i = 0;i<max+1;i++){
        hash[i] = 0;
    }

    for(int i  = 0;i<n;i++){
        hash[arr[i]]++;
    }

    int k = 0;
    for(int i = 0;i<max+1;i++){
        while(hash[i] != 0){
            arr[k++] = i;
            hash[i]--;
        }
    }

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}