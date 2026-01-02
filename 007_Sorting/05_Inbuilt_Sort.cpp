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

    sort(arr,arr+n);

    // For descending order sorting
    sort(arr,arr+n,greater<int>());

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}