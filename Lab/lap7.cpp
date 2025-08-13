#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int choice;
    int answer, guess;
    int score;
    int min, max;

    do {
        printf("Do you want to play game (1=play,-1=exit) :\n");
        scanf("%d", &choice);

        if (choice == 1) {
            srand(time(0));
            answer = rand() % 100 + 1;
            score = 100;
            min = 1;
            max = 100;

            printf("\n(Score=100)\n");

            do {
                printf("\nGuess the winning number (%d-%d) :\n", min, max);
                scanf("%d", &guess);

                if (guess == answer) {
                    printf("\nThat is correct! The winning number is %d.\n", answer);
                    printf("\nScore this game: %d\n", score);
                    break;
                } else {
                    score -= 10;
                    if (guess < answer) {
                        if (guess + 1 > min) min = guess + 1;
                        printf("\nSorry, the winning number is HIGHER than %d. (Score=%d)\n", guess, score);
                    } else {
                        if (guess - 1 < max) max = guess - 1;
                        printf("\nSorry, the winning number is LOWER than %d. (Score=%d)\n", guess, score);
                    }
                }

            } while (score > 0);

            if (score <= 0) {
                printf("\nGame Over. The correct number was %d.\n", answer);
            }
        }

    } while (choice != -1);

    printf("\nSee you again.\n");
    return 0;
}
