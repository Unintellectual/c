#include <stdio.h>
#include "src/defines.h"
#include <string.h>

int is_palindroome(char *str){
    int a = 0;
    int b = strlen(str) - 1;
    Iterate(str, strlen(str) / 2) {
        if (str[a] != str[b]) {
            return 0;
        }
        a++;
        b--;
    }
    return 1;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    if (is_palindroome(str)) {
        printf("The string is a palindrome\n");
    } else {
        printf("The string is not a palindrome\n");
    }
    return 0;
}
