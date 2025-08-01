#include <stdio.h>

int main() {

    int i = 0;
    int number;

    printf("Enter a number: ");

    if (scanf("%d", &number) != 1) {
        printf("please enter number only !!");
        return 0; 
    }

    if (number % 2 == 1) {
        for (int i = 1; i <= number; i += 2) {
            printf("%d ", i);
        }
    } else {
        for (int i = number; i >= 0; i -= 2) {
            printf("%d ", i);
        }
    }

    return 0;
}