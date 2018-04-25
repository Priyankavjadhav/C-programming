#include<stdio.h>
#include<conio.h>

int add(int x,int y);
int main()
{
    int a;
    int b;
    int c,d;
    printf("Enter a and b");
    scanf("%d%d",&a,&b);
    c=add(a,b);
   
    printf("addition is %d",c);
    
    getch();
    return 0;
}

int add(int x,int y)
{
    int z;
    z=x+y;
    
    return z;
}
