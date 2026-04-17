#include <iostream>
using namespace std;


int largestSubWithZeroSum(vector<int> arr){
    unordered_map<int, int> mpp;
    int sum = 0;
    int ans = 0;

    for(int j = 0;j<arr.size();j++){
        sum += arr[j];

        if(mpp.count(sum)){
            int currLen = j - mpp[sum];
            ans = max(ans,currLen);

        }else{
            mpp[sum] = j;
        }
    }

    return ans;
}

int main(){
    vector<int> arr = {15,-2,2,-8,1,7,10};
    cout<<largestSubWithZeroSum(arr)<<endl;
    return 0;
}