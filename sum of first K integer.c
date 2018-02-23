#include <stdio.h>
int main()
{
int n, sum = 0, c, value;
printf("Enter the number of first K integers you want to add\n");
scanf("%d", &n);
printf("Enter %d  first K integers\n",n);
for (c = 1; c <= n; c++)
{
scanf("%d", &value);
sum = sum + value;
}
printf("Sum of entered first K integers = %d\n",sum);
return 0;
}
