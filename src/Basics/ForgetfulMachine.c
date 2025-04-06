#include <stdio.h>

int main() {
    char buffer[100];

    printf("Give me a word!\n");
    fgets(buffer, sizeof(buffer), stdin);

    printf("Give me a second word!\n");
    fgets(buffer, sizeof(buffer), stdin);

    printf("\nGreat, now your favorite number?\n");
    fgets(buffer, sizeof(buffer), stdin);

    printf("And your second-favorite number...\n");
    fgets(buffer, sizeof(buffer), stdin);

    printf("\nWhew!  Wasn't that fun?\n");

    return 0;
}
