#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    scanf("%d", &a);
    int b[a];


    for(int k = 0; k < a; k++) {
        b[k] = rand();
        printf("%d ", b[k]);
    }

    for(int i = 0; i < a; i++) {
        for(int j = 0; j < i+1; j++) {
            if(b[j] > b[i + 1]) {
                int temp = b[j];
                b[j] = b[i + 1];
                b[i + 1] = temp;
            }
        }
    }

    printf("\nfinal arrange array:\n");
    for(int i = 0; i < a; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}
