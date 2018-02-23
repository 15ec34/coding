#include <stdio.h>
int main()
{
int number,power;
int result = 1;
printf("Enter a number: ");
scanf("%d", &number);
printf("Enter an power: ");
scanf("%d", &power);
while (power != 0)
{
result *= number;
 --power;
}
printf("Answer = %d", result);
return 0;
}
