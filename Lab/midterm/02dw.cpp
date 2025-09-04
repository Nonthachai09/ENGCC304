#include <stdio.h>

int main() {
    int n, i, j;
    int scrap;

    printf("กรุณากรอกเลข: ");
    scanf("%d", &n);
    
    i = n;
    if (i >= 2) { 
        do {
            scrap = 1;
            j = 2;
            while (j < i) {
                if (i % j == 0) {
                    scrap = 0;
                    break;
                }
                j++;
            }
            if (scrap == 1) {
                printf("%d ", i);
            }
            i--;
        } while (i >= 2);
    }
    
    printf("\n");
    return 0;
}