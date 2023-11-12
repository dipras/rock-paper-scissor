#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateOpponent() {
    srand(time(NULL));
    return rand() % 3;
}

int main() {
    char options[][10] = {"Rock", "Paper", "Scissor"};
start:
    int choice;
    printf("Options\n");
    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissor\n");
    printf("Input your choice: ");

    scanf("%i", &choice);
    
    if(choice > 3 || choice <= 0) {
        printf("You enter the wrong choice\n\n");
        goto start;
    }
    choice--;
    printf("Your choice is: %s\n", options[choice]);
    
    int opponent = generateOpponent();
    printf("Your opponent choice is: %s\n", options[opponent]);

    if((choice + 1) % 3 == opponent) {
        printf("You LOSE");
    } else if(choice == opponent) {
        printf("DRAW");
    } else {
        printf("You WIN");
    }
    printf("\n");
    return 0;
}