/* This code has a compile-time error, and at
** least one run-time error. */
#include <stdio.h>
#include <math.h>
main(int argc,char *argv[])  //compile-time error , the main function should return int not void.
{
int n,i;
int d2,count,
double d1;
while (1)
{
printf("Enter a number (0 to quit): ");
scanf("%d",&n);
if (n == 0)
break;
count=0;
for (i=0; i<n; i++)
{
d1=(double)n/(double)i;
d2=n/i;
if (fabs(d1-(double)d2) < 0.00001)
count++;
}
if (count == 2)
printf("%d is prime\n",n);
else
printf("%d is not prime\n",n);
}
}
//After debugging line 7 has compile-time error, There's a comma instead of a semicolon at the end of the line. It should be (int d2, count;)instead of (int d2, count,).
//Line 5 has a compile-time error. The main function should return an int, not void. 
//In the for loop, the expression n/i will cause a division by zero error when i is zero. This will result in undefined behavior.Thus  a runtime error
//Below is a corrected code


/*#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int n, i;
    int d2, count;
    double d1;

    while (1) {
        printf("Enter a number (0 to quit): ");
        scanf("%d", &n);
        if (n == 0)
            break;
        count = 0;
        for (i = 1; i < n; i++) {  // Start i from 1 to avoid division by zero
            d1 = (double)n / (double)i;
            d2 = n / i;
            if (fabs(d1 - (double)d2) < 0.00001)
                count++;
        }
        if (count == 1)  // 1 divisor indicates a prime number, n itself
            printf("%d is prime\n", n);
        else
            printf("%d is not prime\n", n);
    }

    return 0;
}*/
