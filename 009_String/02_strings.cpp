// C++ Strings are objects of pre-defined string class in STL.
// C++ Strings have useful member functions.
// C++ Strings are dynamic (their size can change at run time).
// C++ Strings support operators like +, ==, >, < etc.
// C++ Strings are stored contiguously in memory.

#include <iostream>
using namespace std;

int main(){
    string name = "Kishan";
    string name2;
    getline(cin,name2);
    // cout<<name<<" "<<name2;

    for(char ch:name){
        cout<<ch<<" ";
    }
    return 0;
}