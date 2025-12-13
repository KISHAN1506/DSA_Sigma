//     1 - 4
//    212 - 3
//   32123 - 2
//  4321234 - 1
// 543212345 - 0

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter N :";
    cin>>n;

    for(int i = 1;i<=n;i++){
        for(int j = i;j<n;j++){
            cout<<" ";
        }
        for(int j = i;j>=1;j--){
            cout<<j;
        }
        for(int j = 2;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}