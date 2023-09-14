#include <stdio.h>
#include <string.h>

struct Person {
    char name[30];
    char number[30];
};

char* linear_search(struct Person people[], int size, char target_name[]);

int main(void){
    struct Person people[2];

    strcpy(people[0].name, "Jon Snow");
    strcpy(people[0].number, "00-9938-393");

    strcpy(people[1].name, "Daemon Targaryen");
    strcpy(people[1].number, "00-4945-774");

    char target_name[] = "Jon Snow";

    char* target_number = linear_search(people, 2, target_name);

    if (target_number != NULL){
        printf("Name: %s\n", target_name);
        printf("Phone No: %s\n", target_number);
    }

    return 0;
}

char* linear_search(struct Person people[], int size, char target_name[]){
    for (int i = 0; i < size; i++){
        if (strcmp(people[i].name, target_name) == 0){
            return people[i].number;
        }
    }
    return NULL;
}
