#include <stdio.h>
int main(){
    char name[100];
    int age;
    float salary;

    printf("Hello. What is your name?\n");
    scanf("%s", &name);

    printf("Hi, %s! How old are you?\n", name);
    scanf("%d", &age);

    printf("So you're %d, eh? That's not that old at all!\n", age);
    printf("How much do you make %s?\n", name);
    scanf("%f", &salary);

    printf("%.1f! I hope that's per hour and not per year! LOL!", salary);


    return 0;
}