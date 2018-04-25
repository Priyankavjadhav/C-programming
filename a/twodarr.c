#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    //int arr[4][3];
    
     int arr[4][3]={{0,1,2},{3,4,5},{6,7,8},{9,2,3}};
     for(i=0;i<4;i++)
     {
       for(j=0;j<3;j++)
       {
         printf("value of i=%d  j=%d and arr[i][j]=%d \n",i,j,arr[i][j]);
         }
         }
         getch();
         return 0;
         }
    
    
