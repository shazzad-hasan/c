/* C program that prompts the user for the names and houses of some students
and then prints out the informatios.
*/

#include <stdio.h>
#include <string.h>

struct student{
    char name[30];
    char house[30];
};

const int MAX_NUM_STUDENT = 20;

int main(){
    int numOfStudent;

    printf("Enter number of students: ");
    scanf("%d", &numOfStudent);

    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    struct student students[numOfStudent];

    for (int i = 0; i < numOfStudent; i++){
        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);

        printf("House: ");
        fgets(students[i].house, sizeof(students[i].house), stdin);
        
    }

    for (int i = 0; i < numOfStudent; i++){
        students[i].name[strcspn(students[i].name, "\n")] = 0;
        printf("Name: %s, House: %s\n", students[i].name, students[i].house);
    }
 
    return 0;
}