#include <stdio.h>
#include <string.h>

typedef struct
{
 float first_number, second_number, third_number;
}user_data;

void clear_input_buffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void get_user_data( user_data *s){

    printf("What is your firt number? ");
    float first_number = scanf("%f", &s->first_number);

    printf("What is your second number? ");
    float second_number = scanf("%f",  &s->second_number);

    printf("what is youre third number? ");
    float third_number = scanf("%f",  &s->third_number);
    clear_input_buffer();

    int two = 2;
    float result = (s->first_number + s->second_number + s->third_number) / two;
    printf("(%.1f + %.1f + %.1f) / %d is... %.1f\n", s->first_number, s->second_number, s->third_number, two, result);
}

int main(){
    user_data s;
    get_user_data(&s);
    return 0;
}