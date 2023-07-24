/* to check number is positive, negative or zero */
#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("Enter any number: ");
scanf("%d",&n);
if(n>0)
{
printf("number is positive");
}
if(n<0)
{
printf("number is negative");
}
if(n==0)
{
printf("number is zero");
}
getch();
}
