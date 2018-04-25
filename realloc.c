#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int *ptr,i,n1,n2;
    printf("Enter size of array \n");
    scanf("%d",&n1);
    ptr=(int*)malloc(n1*sizeof(int));
    printf("address of previously allocated memory :");
    for(i=0;i<n1;++i)
    {
      printf("%u \t",ptr+i);
      }
      printf("\n Enter new size of array :");
      scanf("%d",&n2);
      ptr=realloc(ptr,n2);
      printf("\naddress of new allocated memory :");
      for(i=0;i<n2;++i)
      {
       printf("%u \t",ptr+i);
       }
       free(ptr);
       getch();
       return 0;
       }
