#include<stdio.h>
#include<conio.h>

int main()
{
    int a[5][2]={{1,2},{3,4},{5,6},{0,1},{3,7}};
    int i, j;
    
    for(i=0;i<5;i++)
    {
      for(j=0;j<2;j++)
      {
        printf("i is %d ,J is %d ,a[i][j] is %d \n",i,j,a[i][j]);
        }
        }
        getch();
        return 0;
        }
