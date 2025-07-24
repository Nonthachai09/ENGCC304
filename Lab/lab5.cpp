#include <stdio.h>

int main() {
    int score;
    
    printf("Enter your score: ");
    
    if (scanf("%d", &score) != 1) {
        printf("please enter number only.\n");
        return 1; 
    }

    if (score < 50) {
        printf("Your grade is F !\n");
    } else if (score < 55) {
        printf("Your grade is D !\n");
    } else if (score < 60) {
        printf("Your grade is D+ !\n");
    } else if (score < 65) {
        printf("Your grade is C !\n");
    } else if (score < 70) {
        printf("Your grade is C+ !\n");
    } else if (score < 75) {
        printf("Your grade is B !\n");
    } else if (score < 80) {
        printf("Your grade is B+ !\n");
    } else {
        printf("Your grade is A !\n");
    }

    return 0;
}