#include<stdio.h>
#include<conio.h>
void change(int *num);
int main()
{
    int x=100;
    printf("before calling function value of x is %d \n",x);
	change(&x);
    printf("after calling function value of x is %d \n",x);
    getch();
    return 0;
}
void change(int *num)
{
     printf("before addition value of num %d \n",*num);
     *num=*onum+100;
     printf("after addition value of num %d \n",*num);
}
