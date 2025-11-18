//operation on matrices
#include <stdio.h>
int main()
{
	printf("what do you want to do today \n multiplication \n addition \n substraction");
				
	int a,b,c,r;
	scanf("%d %d",&a,&b);
	int A[10][10],B[10][10],d[10][10]; //d =output 
	
	// Input Matrix A
    printf("Enter elements of Matrix A (%dx%d):\n", r, c);
    int i=0,j=0;
    scanf("%d %d",&r,&c);
    for (i; i < r; i++)
    {
	
        for (j; j < c; j++)
        {
		
            scanf("%d", &A[i][j]);
    	}
}
    // Input Matrix B
    printf("Enter elements of Matrix B (%dx%d):\n", r, c);
    for (i; i < r; i++)
    {
	
        for (j; j < c; j++)
        {
		
            scanf("%d", &B[i][j]);
        }
        }
     
	return 0;
	
}
