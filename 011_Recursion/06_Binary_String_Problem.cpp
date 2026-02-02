#include <iostream>
using namespace std;

void BinStr(int n,int lastPlace,string ans){
    if(n == 0){
        cout<<ans<<endl;
        return;
    }

    if(lastPlace != 1){
        BinStr(n-1,0,ans+"0");
        BinStr(n-1,1,ans+"1");
    }else{
        BinStr(n-1,0,ans+"0");
    }
}

void BinStr2(int n, string ans){
    if(n == 0){
        cout<<ans<<endl;
        return;
    }

    if(ans[ans.size()-1] != '1'){ // checking == '0' will give error because empty str doesn't have last index 1
        BinStr2(n-1,ans+'0');
        BinStr2(n-1,ans+'1');
    }else{
        BinStr2(n-1,ans+'0');
    }
}

int main(){
    string ans = "";
    BinStr2(3,ans);
    return 0;
}