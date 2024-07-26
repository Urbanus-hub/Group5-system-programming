/* Write a program that prompts the user for a positive integer and then
computes the sum of all the digits of the number. For example, if the
user enters 2784, then the program reports 21. If the user enters 59,
then the program reports 14. The program should work for any number having one to ten digits. */

#include <stdio.h>

int main()
{
    unsigned long long number; // To handle up to 10 digits, use unsigned long long
    int sum = 0;

    // Prompt the user to enter a positive integer
    printf("Enter a positive integer (up to 10 digits): ");
    scanf("%llu", &number);

    // Calculate the sum of the digits
    while (number > 0)
    {
        sum += number % 10; // Add the last digit to the sum
        number /= 10;       // Remove the last digit
    }

    // Display the result
    printf("The sum of the digits is: %d\n", sum);

    return 0;
}
