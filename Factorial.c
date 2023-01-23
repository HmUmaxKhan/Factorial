#include <stdio.h> // Factorial of a number
int main()
{

    // Initialize the Variables
    int n, i, product = 1;

    // Enter the number which factorial you want.
    printf("Enter number:\n");
    scanf("%d", &n);

    // Applying the condition for 0 and 1
    if (n == 0 || n == 1)
    {
        printf("Factorial = 1\n");
    }

    // Using loop
    for (i = 1; i <= n; ++i)
    {
        product *= i;
    }
    // Print the output of factorial
    printf("factorial = %d\n", product);
    return 0;
}