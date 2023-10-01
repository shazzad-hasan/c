/* C program that prompts the user for the names and ages of some students
and then prints out the provided informatios.
*/

#include <stdio.h>
#include <string.h>

struct student{
    char name[30];
    int age;
};

const int MAX_CLASS_SIZE = 20;

int main(){
    int numOfStudent;
    struct student students[MAX_CLASS_SIZE];

    printf("Enter number of students: ");
    scanf("%d", &numOfStudent);

    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    for (int i = 0; i < numOfStudent; i++){
        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);

        printf("Age: ");
        scanf("%d", &students[i].age);   

        // Consume the newline character left in the buffer by scanf
        while ((c = getchar()) != '\n' && c != EOF);

        // Remove the newline character from the name
        // students[i].name[strcspn(students[i].name, "\n")] = 0;      
    }

    for (int i = 0; i < numOfStudent; i++){
        students[i].name[strcspn(students[i].name, "\n")] = 0;
        printf("%s \t %d\n", students[i].name, students[i].age);
    }
 
    return 0;
}