#include <iostream>
#include <string>  // Thu vi?n cho ki?u d? li?u string

using namespace std;

int main() {
    string str = "Hello";
    for (int i = 0; i < str.length(); i++) {
        cout << str[i] << " ";  
    }
    
    cout << endl;  

    return 0;
}

