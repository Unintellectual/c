#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[25];
    int age;
}user_data;

void clear_input_buffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void get_user_data(user_data *user)
{
    printf("Hello. What is your name? ");
    fgets(user->name, sizeof(user->name), stdin);
    user->name[strcspn(user->name, "\n")] = '\0';

    printf("\nHi, %s! How old are you? ", &user->name);
    scanf("%d", &user->age);
    clear_input_buffer();
    int prev_age = user->age - 5;
    int new_age = user->age + 5;
    
    printf("\Did you know that in five years you'll be %d years old?\n", new_age);
    printf("And five years ago you were %d! Imagine that!\n", prev_age);

    

}


int main(){
    user_data user;
    get_user_data(&user);
    return 0;
}