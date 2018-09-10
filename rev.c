#include<stdio.h>
int main()
{
int n,rv=0,rem;
printf("enter the integer");
scanf("%d",&n);
while(n!=0)
{
rem=n%10;
rv=rv*10+rem;
n/=10;
}
printf("reverse no=%d",rv);
return 0;
}
