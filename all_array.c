#include <stdio.h>

int main() {
    // integer array
    int digits[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // static float array
    static float x[6] = {0, 0.25, 0, -0.50, 0, 0};

    // character array
    char color[3] = {'R', 'E', 'D'};

    // display contents of digits[]
    printf("Contents of digits[]:\n");
    for (int i = 0; i < 10; i++) {
        printf("digits[%d] = %d\n", i, digits[i]);
    }

    // display contents of x[]
    printf("\nContents of x[]:\n");
    for (int i = 0; i < 6; i++) {
        printf("x[%d] = %f\n", i, x[i]);
    }

    // display contents of color[]
    printf("\nContents of color[]:\n");
    for (int i = 0; i < 3; i++) {
        printf("color[%d] = '%c'\n", i, color[i]);
    }

    return 0;
}
