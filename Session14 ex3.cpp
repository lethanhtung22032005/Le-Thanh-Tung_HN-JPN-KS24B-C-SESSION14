#include <iostream>
#include <string>  

using namespace std;

int main() {
    string str = "Hello";
    cout << "Chuoi ban dau: " << str << endl;
    cout << "Chuoi dao nguoc: ";
    for (int i = str.length() - 1; i >= 0; i--) {
        cout << str[i];
    }
    cout << endl; 

    return 0;
}
	
