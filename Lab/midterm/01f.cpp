#include <stdio.h>

int main() {
    int n,i,j;
    int scrap; 
    
    printf("กรุณากรอกเลข: ");
    scanf("%d", &n);

    for (i = n; i >= 2; i--) {
        
        scrap = 1;
        
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                
                scrap = 0;
                break;
            }
        }
        if (scrap == 1) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}