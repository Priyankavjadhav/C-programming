#include<stdio.h>
#include<conio.h>
void test(int a);
int main()
{
    int x=50;
    test(x);
    printf("%d",x);
    getch();
    return 0;
}
void test(int a)
{
     a=a+50;
     }
