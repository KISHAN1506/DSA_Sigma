#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char str1[100];
    char str2[100] = "Hello World";

    strcpy(str1,"Kishan Agarwal");
    cout<<str1<<endl;

    strcat(str1,str2);
    cout<<str1<<endl;
    
    strcpy(str1,str2);
    cout<<str1<<endl;
    

    char str3[100] = "abc";
    char str4[100] = "xyz";
    cout<<strcmp(str3,str4)<<endl; // -ve

    char str3a[100] = "xyz";
    char str4a[100] = "abc";
    cout<<strcmp(str3a,str4a)<<endl; // +ve

    char str3b[100] = "abc";
    char str4b[100] = "abc";
    cout<<strcmp(str3b,str4b)<<endl; // 0

    return 0;

}