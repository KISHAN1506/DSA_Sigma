#include <iostream>
using namespace std;

int tilingProblem(int n){

    if(n == 0 || n == 1){
        return 1;
    }

    // verticle
    int ans1 = tilingProblem(n-1);
    // Horizontal
    int ans2 = tilingProblem(n-2);

    return ans1+ans2;

}

int main(){
    cout<<tilingProblem(4)<<endl;
    return 0;
}