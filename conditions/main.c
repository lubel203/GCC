#include <stdio.h>

void guessNumber(int guess) {
  int Number = 555; 

    if (guess < Number) {
        printf("Le nombre %d est trop petit.\n", guess);
    } else if (guess > Number) {
        printf("Le nombre %d est trop grand.\n", guess);
    } else {
        printf("Bravo ! %d est le bon nombre !\n", guess);
    
}    
    // TODO: write your code here
}

int main() {
    guessNumber(500);
    guessNumber(600);
    guessNumber(555);
}
