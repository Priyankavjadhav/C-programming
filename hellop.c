#include<stdio.h>
#include<conio.h>
int fact(int i);
int main()
{
int a;
printf("Enter a value of a\n");
scanf("%d",&a);
printf("value of factorial a is %d",fact(a));
getch();
return 0;
}

int fact(int i)
{
if(i<=1)
{
        return 1;
}
return i*fact(i-1);
}
