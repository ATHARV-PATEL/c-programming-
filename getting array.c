#include <stdio.h>
 
 	int a(int b[])//getting array
	 {

		printf("element in array: ");
		int i =0;
    		for (i; i < 8; i++) {
			
      printf("%d ", b[i]);
    }
    } 
int main() {
	int b[] = {1,23,4,435,45,6,6,5,67};
	int c = sizeof(b)/sizeof(b[0]);
	printf("%d", b[c-1]);
    
    a(b);
    return 0;
}





