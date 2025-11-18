#include <stdio.h> // Required for input (scanf) and output (printf)

// The main function where program execution begins
int main() {
    // --- 1. User Input and Output (I/O) ---
    int user_number;
    int loop_limit = 3; // Fixed limit for the simple loop demonstration

    // Output: Prompt the user for input
    printf("Welcome to the C Fundamentals Demo!\n");
    printf("Please enter a single integer (we recommend 1, 2, or 3 for the switch case demonstration): ");

    // Input: Read the integer from the user
    // The '&' symbol is necessary to pass the memory address of user_number
    if (scanf("%d", &user_number) != 1) 
	{
        // Simple error handling for bad input
        printf("Invalid input. Exiting.\n");
        return 1;
    }
    printf("\n"); // Newline for clean separation

    // Output: Confirm the number entered
    printf("--- Analysis of Your Number (%d) ---\n", user_number);

    // --- 2. Simple 'if' Statement ---
    // Checks a single condition
    if (user_number > 0) 
	{
        printf("1. 'if' check: Your number is positive.\n");
    }

    // --- 3. 'if-else' Statement ---
    // Checks one condition and executes an alternative block if false
    if (user_number % 2 == 0) 
	{
        printf("2. 'if-else' check: Your number is Even.\n");
    } 
	else 
	{
        printf("2. 'if-else' check: Your number is Odd.\n");
    }

    // --- 4. 'switch' Statement ---
    // Executes different code blocks based on the value of a single variable
    printf("3. 'switch' check: ");
    switch (user_number) {
        case 1:
            printf("You chose One - The beginning.\n");
            break; // Exits the switch statement
        case 2:
            printf("You chose Two - Pair up.\n");
            break;
        case 3:
            printf("You chose Three - Third time's the charm.\n");
            break;
        default:
            printf("You chose a number outside of 1, 2, or 3.\n");
            // No break needed here as it's the last case
    }
    printf("\n");

    // --- 5. Simple 'for' Loop ---
    // Executes a block of code a specific number of times
    printf("--- Loop Demonstrations ---\n");
    printf("4. Simple 'for' loop (Countdown from %d):\n", loop_limit);
    for (int i = loop_limit; i >= 1; i--) 
	{
        printf("   - Count: %d\n", i);
    }

    // --- 6. Nested 'for' Loop ---
    // A loop inside another loop. Used here to create a simple pattern (Multiplication)
    printf("5. Nested 'for' loop (Multiplication Table for %d):\n", user_number);
    printf("   (Outer Loop: Rows, Inner Loop: Columns)\n");

    for (int row = 1; row <= 3; row++) 
	{ // Outer loop (runs 3 times)
        printf("   Row %d: | ", row);
        for (int col = 1; col <= 3; col++) 
		{ // Inner loop (runs 3 times for each row)
            int result = row * col * user_number;
            printf("(%d * %d * %d) = %4d | ", row, col, user_number, result);
        }
        printf("\n"); // Newline after each row
    }

    printf("\nProgram finished successfully.\n");

    return 0; // Indicates successful execution
}

