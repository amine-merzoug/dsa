/* 
Game Description
----------------
- The computer selects a secret number between 1 and 100.
- The player must guess the number.
After each guess:
- If the guess is too high, display "Too high!"
- If the guess is too low, display "Too low!"
- If correct, display "Correct!"
The game continues until the player finds the correct number or max number of attemps is reached.

Example Execution
-----------------
Welcome to Guess the Number!

I have chosen a number between 1 and 100.

Enter your guess: 50
Too low! 

Enter your guess: 75
Too high!

Enter your guess: 63
Correct! You found the number in 3 attempts.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generate_secret_num(){
    int num;
    // Seed the random generator (only once in main)
    srand(time(NULL));

    // Generate number between 1 and 100
    num = rand() % 100 + 1;
    return num;
}

int main() {
    // This is just to check the generated random number.
    // This line must be removed
    printf("Secret number (between 1 and 100): %d\n", generate_secret_num());

    /*do
    {
        //code 
    } while (condition);*/
    
    return 0;
}