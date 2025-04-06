#include <stdio.h>
#include <string.h>

typedef struct 
{
    char fName[25], lName[25], loginName[100];
    int gradeLevel;
    float GPA;
    int studentId;
}studentData;

void clearInputBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}

void getStudentInfo(studentData *s)
{
    printf("First name: ");
    fgets(s->fName, sizeof(s->fName), stdin);
    s->fName[strcspn(s->fName, "\n")] = '\0';

    
    printf("Last name: ");
    fgets(s->lName, sizeof(s->lName), stdin);
    s->lName[strcspn(s->lName, "\n")] = '\0';
    
    printf("Grade (9-12): ");
    while (scanf("%d", &s->gradeLevel) != 1 || s->gradeLevel < 9 || s->gradeLevel > 12)
    {
        printf("Invalid grade level! Please enter valid grade level between 9-12: ");
        clearInputBuffer();
    }
    clearInputBuffer();
    
    printf("studentID: ");
    while (scanf("%d", &s->studentId) != 1 || s->studentId <= 0)
    {
        printf("bobo ka mali yung laman ng ID mo check mo wag kang tanga! Lapag mo dito: ");
        while (scanf("%d", &s->studentId) != 1 || s->studentId <= 0)
        clearInputBuffer();
    }
    clearInputBuffer();
    
    printf("Login : ");
    fgets(s->loginName, sizeof(s->loginName), stdin);
    s->loginName[strcspn(s->loginName, "\n")] = '\0';
    
    printf("GPA: ");
    while (scanf("%f", &s->GPA) != 1 || s->GPA <= 0)
    {
        printf("bobo ka mali yung laman ng ID mo check mo wag kang tanga! Lapag mo dito: ");
        while (scanf("%f", &s->GPA) != 1 || s->GPA <= 0)
   
        clearInputBuffer();
    }
    clearInputBuffer();
}

void displayStudentInfo(const studentData *s)
{
    printf("\n Your Information:\n");
    printf("\tLogin: %s\n", s->loginName);
    printf("\tID: %i\n", s->studentId);
    printf("\tName: %s, %s\n", s->fName, s->lName);
    printf("\tGPA: %.1f\n", s->GPA);
    printf("\tGrade: %i\n", s->gradeLevel);
}
int main()
{
    studentData student;
    getStudentInfo(&student);
    displayStudentInfo(&student);

    return 0;
}