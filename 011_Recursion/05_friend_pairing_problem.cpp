#include <iostream>
#include <vector>
using namespace std;

vector<long long> dp(100,-1);

long long fpp(int n){
    if(n == 1 || n ==2){
        return n;
    }
    if(dp[n] != -1){
        return dp[n];
    }
    long long val1 = fpp(n-1);
    long long val2 = (n-1)*fpp(n-2);
    return dp[n] = val1+val2;
}

int main(){
    cout<<fpp(50)<<endl;
    return 0;
}