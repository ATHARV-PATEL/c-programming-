#include <stdio.h>

int main() {
    int birthday, birthmonth, birthyear;
    int currentday, currentmonth, currentyear;
    int age;

    
    printf("Enter your Date of Birth (DD MM YYYY): ");
    scanf("%d %d %d", &birthday, &birthmonth, &birthyear);

    
    printf("Enter today's date (DD MM YYYY): ");
    scanf("%d %d %d", &currentday, &currentmonth, &currentyear);

    // age
    age = currentyear - birthyear;

    // Adjust if birthday hasn't occurred yet this year
    if (birthmonth > currentmonth || 
       (birthmonth == currentmonth && birthday > currentday)) 
	{
        age--;
        printf("Your age is: %d\n", age);
       // printf("you are not born yet");
        
    }
  //  else printf("you are not born yet");

    printf("Your age is: %d\n", age);

    return 0;
}
