#include <stdio.h>

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    printf("Enter N : ");
    scanf("%d", &n);

    int arr[100];
    for (int i = 0; i < n; i++) {
        printf("Enter value[%d] : ", i);
        scanf("%d", &arr[i]);
    }

    printf("Index: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", i);
    }
    printf("\n");

    printf("Array: ");
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i]))
            printf("%d ", arr[i]);
        else
            printf("# ");
    }
    printf("\n");
}