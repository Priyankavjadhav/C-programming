#include<stdio.h>
#include<conio.h>
int minarray(int arr[],int size){
    int min=arr[0];
    int i=0;
    for(i=1;i<size;i++)
    {
      if(min>arr[i])
      {
        min=arr[i];
        }
     }
        return min;
    }
        
      int main()
      {
          int i,min=0;
          int number[6];
          printf("enter array element");
          for(i=0;i<6;i++){
          	scanf("%d",&number[i]);
		  }
          min=minarray(number,6);
          printf("small value in array is %d",min);
          getch();
          return 0;
          }
