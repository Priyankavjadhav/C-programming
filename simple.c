#include<stdio.h>
#include<conio.h>
int cube(int n);//function dec
//extern int x=10;
int main()
{
   int result1=0,result2=0;
   result1=cube(2);//calling fun
   result2=cube(3);//calling fun
 //  printf("value of x is %d\n",x);
   printf("value of result1 is %d \n",result1);
   printf("value of result2 is %d \n",result2);
    getch();
    return 0;
}
int cube(int n)  //function def
{
	
     return n*n*n;
}
