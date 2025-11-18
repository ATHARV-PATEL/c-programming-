#include <stdio.h>
#include<stdlib.h>

int main() {
    int a;
    scanf("%d", &a);
    int b[a];

    for(int i = 0; i < a; i++) {
          b[i] = rand();
          printf("%d ", b[i]);
    }

   
    return 0;
}
