/* C program that reads grades of students in a class,
prints out the average and the grades above the average. */

#include <stdio.h>

const int MAX_CLASS_SIZE = 60;

void displayGrades(int gradeList[], int numOfStudents);
double avgGrade(int gradeList[], int numOfStudents);
void gradesAboveAvg(int gradeList[], int numberOfStudents, double avg);

int main(){
    int numOfStudents;
    int gradeList[MAX_CLASS_SIZE];

    printf("Enter the number of students in the class (no more than %d): ", MAX_CLASS_SIZE);
    scanf("%d", &numOfStudents);

    printf("Enter student's grades (separated by a space): ");
    for (int i = 0; i < numOfStudents; i++){
        scanf("%d", &gradeList[i]);
    }

    // displayGrades(gradeList, numOfStudents);

    double avg = avgGrade(gradeList, numOfStudents);
    printf("The class average is %.2lf\n", avg);

    gradesAboveAvg(gradeList, numOfStudents, avg);

    return 0;
}

// prints out the grades
void displayGrades(int gradeList[], int numOfStudents){
    for (int i = 0; i < numOfStudents; i++){
        printf("%d\n", gradeList[i]);
    }
}

// calculate the average
double avgGrade(int gradeList[], int numOfStudents){
    int sum = 0;
    for (int i = 0; i < numOfStudents; i++){
        sum += gradeList[i];
    }

    return (double) sum / (double) numOfStudents;
}

// prints out the grades above the class average grade
void gradesAboveAvg(int gradeList[], int numberOfStudents, double avg){
    for (int i = 0; i < numberOfStudents; i++){
        if (gradeList[i] > avg){
            printf("%d\n", gradeList[i]);
        }
    }
}
