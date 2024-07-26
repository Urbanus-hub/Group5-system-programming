#include <stdio.h>
#include <math.h>
#include<stdlib.h>
int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Find the integer square root
    int sqrt_num = (int)sqrt(num);

    // Check the closest perfect square
    int lower = sqrt_num * sqrt_num;
    int upper = (sqrt_num + 1) * (sqrt_num + 1);
    
    // Find the closest integer with a whole number squareroot
    int closest_integer;
    if (abs(num - lower) <= abs(num - upper)) {
        closest_integer = sqrt_num;
    } else {
        closest_integer = sqrt_num + 1;
    }
    closest_integer = closest_integer*closest_integer;

    printf("The closest integer with a whole number square root is: %d\n", closest_integer);

    return 0;
}
