#include <iostream>
#include <string>  // Thu vi?n cho ki?u d? li?u string

using namespace std;

int main() {
    string str = "programming";
    char c;
    cout << "Nhap vao mot ky tu: ";
    cin >> c;
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == c) {
            count++;  
        }
    }
    cout << "Ky tu '" << c << "' xuat hien " << count << " lan trong chuoi." << endl;
    return 0;
}

