#include <stdio.h>

float averageTwo(int n1, int n2);

int main()
{
    float a;
    int b1, b2;
    scanf("%d %d",&b1, &b2);
    printf("%d %d",b1,b2);
    a = averageTwo(b1, b2);
    printf("The average of %d and %d is %.2f", b1, b2, a);
    return 0;
}

float averageTwo(int n1, int n2)
{
    float average;
    average = (n1 + n2) / 2.0;
    return average;
}
