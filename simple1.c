#include<stdio.h>
#include<conio.h>

int cube(int n)
{
    printf("n is %d\n",n);
    return n*n*n;
}
int main()
{
    int a=3;
    int r=0;
    r=cube(a);
    printf("value of a is %d",r);
    getch();
    return 0;
}
