#include <stdio.h>
// Mandatory part of a C program, responsible for input and output of data.
int main() {
    //int = integer and main = principal variable of the program.
    //(int main(){content of the main scope})
printf("************************************\n");
printf("*WELCOME TO THE GUESSING GAME!! LET'S GET STARTED?*\n");
printf("************************************\n");

int secretnumber = 40;
    secretnumber = 40;
// variable >>secretnumber<< that receives the value 40, which is the >secret number< to be guessed by the user. 

int guess;
//variable >>guess<< that receives the value through the >>scanf()<< function, responsible for input and output of data.
//the variable >>guess<< is compared with the variable >>secretnumber<<.
for (int i = 1; i <= 3; i++) { // i = repetition control, which goes from 1 to 3, that is, the user has 3 chances to guess the secret number.
printf("What is your %dth guess?", i);
scanf("%d", &guess); 
//function >>scanf()<< that receives the value typed by the user. 
//%d is the data that will be received, in this case an integer.
printf("Your %dth guess was %d!\n", i, guess);
//return the value typed by the user, which is stored in the variable >>guess<<.

int correct = guess == secretnumber;
    if (correct) {
        printf("Congratulations, You guessed correctly!\n");
        break; // stop the loop >>if<< the user guesses correctly.
        } else {
            int larger = guess > secretnumber;
            if(larger) {
            printf("You guessed a number GREATER than the secret number\n");
            // return the message that the user guessed a number greater than the secret number.
            } else {
            printf("You guessed a number LESS than the secret number\n");
            // return the message that the user guessed a number less than the secret number.
            }
        }
    }
printf("End of game! Thanks for playing!\n");
}