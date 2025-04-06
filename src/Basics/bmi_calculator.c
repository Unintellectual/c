#include <stdio.h>
#include <string.h>

typedef struct
{
    float height, weight;    
}user_data;

void clear_input_buffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void get_user_data(user_data *s)
{
    printf("Your height in m: ");
    scanf("%f", &s->height);

    printf("Your weight in kg: ");
    scanf("%f", &s->weight);
    clear_input_buffer();

    float result = s->weight/ (s->height * s->height);
    printf("\nYour BMI is %.4f\n", result);
}
int main()
{
    user_data s;
    get_user_data(&s);
    return 0;
}