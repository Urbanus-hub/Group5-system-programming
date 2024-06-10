#include <iostream>

// Function to calculate factorial of a number
unsigned long long factorial(int n)
{
    if (n < 0)
    {
        std::cerr << "Factorial is not defined for negative numbers." << std::endl;
        return 0;
    }
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i)
    {
        result *= i;
    }
    return result;
}

int main()
{
    int number;

    std::cout << "Enter a positive integer: ";
    std::cin >> number;

    unsigned long long fact = factorial(number);

    if (number >= 0)
    {
        std::cout << "Factorial of " << number << " = " << fact << std::endl;
    }

    return 0;
}
