#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number of elements :";
    cin >> n;

    char arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++){
        for (int j = i - 1; j >= 0; j--){
            if (arr[j] < arr[j + 1]){
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}