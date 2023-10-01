/* C program that prompts the user for the names and ages of some students
and then prints out the provided informations.
*/

#include <stdio.h>
#include <string.h>

typedef struct{
    char name[30];
    int age;
} student;

const int MAX_NUM_STUDENT = 20;
int main(){
    int numOfStudents;
    student students[MAX_NUM_STUDENT];

    printf("Enter number of students (no more than %d): ", MAX_NUM_STUDENT);
    scanf("%d", &numOfStudents);

    // Consume the newline character left in the buffer by scanf
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    
    // Ger students' information from the user
    for (int i = 0; i < numOfStudents; i++){
        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);

        printf("Age: ");
        scanf("%d", &students[i].age);

        // Consume the newline character left in the buffer by scanf
        while ((c = getchar()) != '\n' && c != EOF);

        // Remove the newline character from the name
        students[i].name[strcspn(students[i].name, "\n")] = 0; 
    }

    // Print all students' information
    for (int i = 0; i < numOfStudents; i++){
        printf("%s \t %d\n", students[i].name, students[i].age);
    }

    return 0;
}
