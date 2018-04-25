#include<stdio.h>
#include<conio.h>
int main()
{
   int i,j;
    int arr[5];// declaration
    
   /*  arr[0]=10;//intialization
     arr[1]=30;
     arr[2]=40;
     arr[3]=20;
     arr[4]=15;*/
     
     
   //  int arr[]={12,14,24,35,46};
    printf("enter value of an array");
    for(j=0;j<5;j++)
    {
    	scanf("%d",&arr[j]);
	}
	printf("array is:");
    for(i=0;i<5;i++)
    {
      printf("%d \n",arr[i]);
      }
      getch();
      return 0;
      }
