/* find max in two numbers */
#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2;
clrscr();
printf("Enter two numbers: ");
scanf("%d%d",&n1,&n2);
if (n1>n2)
{
printf("%d is max",n1);
}
if(n2>n1)
{
printf("%d is max",n2);
}
else if(n1 == n2)
{
printf("Both are equal");
}
getch();
}
