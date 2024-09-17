#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char A[101], B[101];
    scanf("%s", A);
    scanf("%s", B);
    
    if (strlen(A) != strlen(B)) {
        printf("BERBEDA\n");
    } else {
        int identik = 1;
        
        for (int i = 0; A[i] != '\0'; i++) {
            if (A[i] != B[i]) {
                identik = 0;
                break;
            }
        }
        
        if (identik) {
            printf("IDENTIK\n");
        } else {
            printf("MIRIP\n");
        }
    }
    return 0;
}