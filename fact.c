#include<stdio.h>
#include<conio.h>
int fact(int i)
{
    if(i<=1){
             return 1;
     }
    return i*fact(i-1);
    
}
int main()
{
    int a;
    printf("enter value for factorial");
    scanf("%d",&a);
    
    printf("a=%d and factorial value is %d \n",a,fact(a));
    getch();
    return 0;
}
