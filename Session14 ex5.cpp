#include <iostream>
#include <sstream> 
#include <string>

using namespace std;

int main() {
    string str = "hello world";  
    stringstream ss(str);
    string word;
    int count = 0;
    while (ss >> word) {
        count++; 
    }
    cout << count << endl;

    return 0;
}

