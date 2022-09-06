#include <stdio.h>

struct student {
    char firstName[50];
    int roll;
    int marks[6];
} s;

int main() {
    int i;
    printf("Enter the following information:\n");
    
    printf("Enter first name: ");
    scanf("%s", &s.firstName);
    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    for (i = 0; i < 5; ++i) {
        printf("Enter marks in subject %d: ",i+1);
        scanf("%d", &s.marks[i]);
    }
    printf("The subject details are :\n\n");

    printf("First name: ");
    puts(s.firstName);
    printf("Roll number: %d \n", s.roll);

    for (i = 0; i < 5; ++i) {
        printf("Marks in subject %d: %d",i+1 ,s.marks[i]);
        printf("\n");
    }
    return 0;
}