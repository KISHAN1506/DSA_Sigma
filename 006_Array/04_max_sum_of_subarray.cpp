#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // BRUTEFORCE APPROACH
    // int val = INT_MIN;
    // for(int start = 0;start<n;start++){
    //     for(int end = start;end<n;end++){
    //         int sumval = 0;
    //         for(int k = start;k<=end;k++){
    //             sumval += arr[k];
    //         }
    //         if(sumval > val){
    //             val = sumval;
    //         }
    //     }
    // }

    // BRUTEFORCE APPROACH BUT SLIGHTLY OPTIMISED O(n3) -> O(n2)
    // int val = INT_MIN;
    // for(int start = 0;start<n;start++){
    //     int sumVal = 0;
    //     for(int end = start;end<n;end++){
    //         sumVal += arr[end];
    //         if(sumVal > val){
    //             val = sumVal;
    //         }
    //     }
    // }
    // cout<<val;

    // BEST Approach -> Kadane's algorithm -> O(n2) -> O(n)
    int maxVal = INT_MIN;
    int sumVal = 0;
    for (int start = 0; start < n; start++){
        sumVal += arr[start];
        if (sumVal > maxVal){
            maxVal = sumVal;
        }

        // We are doing this because is sumVal of a subarray is -ve
        // It is anyhow going to decrease the total value, so we won't add next coming value in 
        if (sumVal < 0){
            sumVal = 0;
        }
    }
    cout << maxVal;

    return 0;
}