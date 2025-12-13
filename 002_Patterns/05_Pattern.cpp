// A
// B C
// D E F
// G H I J
// K L M N O
// P Q R S T U

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n :";
    cin >> n;

    int ch = 'A';
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i + 1; j++){
            cout << (char)(ch) << " ";
            ch++;
        }
        cout << endl;
    }

    return 0;
}