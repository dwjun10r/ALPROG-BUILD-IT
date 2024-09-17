#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x;
    scanf("%d", &x);
    
    int nilai[x];
    for (int i = 0; i < x; i++) {
        scanf("%d", &nilai[i]);
    }
    for (int i = 0; i < x-1; i++) {
        for (int j = 0; j < x-i-1; j++) {
            if (nilai[j] > nilai[j+1]) {
                int temp = nilai[j];
                nilai[j] = nilai[j+1];
                nilai[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < x; i++) {
        printf("%d\n", nilai[i]);
    }
    return 0;
}

