// C program to demonstrate command line arguments: main( int argc, char *argv[] )

/* argc (argument count): argument count, a count of the number of command line arguments, the executable 
                          name (command) is included so argc is at least 1 for every program
   argv (argument vector): an array of strings, there is one string for each command line arg 
*/

#include <stdio.h>

int main(int argc, char *argv[]){

    printf("argc: %d\n", argc); 
    printf("argv[0]: %s\n", argv[0]);

    if (argc == 1){
        printf("No argument were passed \n");
    }
    else {
        printf("Arguments: \n");
        for (int i = 0; i < argc; i++){
            printf("%d: %s\n", i, argv[i]);
        }
    }
    return 0;
}