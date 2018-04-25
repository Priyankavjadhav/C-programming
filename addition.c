#include<stdio.h>
#include<conio.h>
int addition(int a,int b)
{
    int c;
    c=a+b;
   // printf("value of c is %d \n",c);
    return c;
}
//int addition(int a,int b);
int main()
{
    int x=10,y=20,z;
    z=addition(x,y);
    printf("value of z is %d \n",z);
    getch();
    return 0;
}

