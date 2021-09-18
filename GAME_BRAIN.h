#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int random_number(){ // Genterating random number 
    srand(time(0)); // seed is time
    int number = rand() / 50;
    return number;
}

void q_and_a(){ // main function
    int chance = 0;
    int max_chance = 5;
    int answer;

    for (chance = 0; chance <= max_chance; chance++)
    {
        printf("Chance: %d out of %d\n", chance, max_chance);
        printf("Enter the number: ");
        scanf("%d", &answer);
        if (answer == random_number())
        {
            printf("Your answer is correct!");
            break;
        }
        else if (answer == 1000) // Cheat code
        {
            printf("Your answer is correct!(Using Cheat)");
            break;
        }
        
        else if (answer == 0)
        {
            printf("Invalid entrie\n");
            continue;
        }
        else{
            printf("\n");
            continue;
        }
    }
    printf("The answer was %d\n", random_number());
    
}

