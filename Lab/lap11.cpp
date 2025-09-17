#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int sum = 0, temp, digit, n = 0;
    temp = num;

    while (temp > 0) {
        n++;
        temp /= 10;
    }

    temp = num;
    
    while (temp > 0) {
        digit = temp % 10;
        sum += pow(digit, n);
        temp /= 10;
    }

    return (sum == num);
}

int main() {
    int num;
    printf("Enter Number:\n");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("Pass.\n");
    else
        printf("Not Pass.\n");

    return 0;
}
