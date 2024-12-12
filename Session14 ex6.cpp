#include <stdio.h>  
#include <string.h>  

int main() {
    char str[] = "Hello 123 World!"; 
    int count = 0;
    int length = strlen(str);  
    for (int i = 0; i < length; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            count++;  
        }
    }
    printf("So luong ky tu la chu cai: %d\n", count);

    return 0;
}

