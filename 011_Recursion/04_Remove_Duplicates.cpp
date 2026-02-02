#include <iostream>
using namespace std;

void removeDup(string str,string ans,int i,bool map[26]){
    if(i == str.size()){
        cout<<ans;
        return;
    }
    
    if(map[str[i] - 'a'] == 0){
        map[str[i] - 'a'] = true;
        ans += str[i];
        removeDup(str,ans,i+1,map);
    }else{
        removeDup(str,ans,i+1,map);
    }
}

int main(){
    string str = "aaabbb";
    string ans = "";
    bool map[26];
    for(int i = 0;i<26;i++){
        map[i] = false;
    }
    removeDup(str,ans,0,map);
    return 0;
}