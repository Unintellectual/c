#include <stdio.h>



int main(){

    int age;
    int feet;
    int inches;
    double weight;
    printf("How old are you? \n" );
    scanf("%d", &age);
    printf("How tall are you? \n");
    printf("in feet? \n");
    scanf("%d", &feet);
    printf("inches? \n");
    scanf("%d", &inches);
    printf("How much do you weigh? \n");
    scanf("%lf", &weight);
    printf("So you're %i years old, %i'%i\" tall and %.1f heavy. \n", age, feet, inches, weight);
    return 0;
}