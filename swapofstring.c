#include<stdio.h>
#include<conio.h>
void swap(char *str1, char *str2)
{
  char temp = *str1;
  *str1 = *str2;
  *str2 = temp;
  printf("str111 is %c, str2222 is %c", str1, str2);
}  
  
int main()
{
  char *str1 = 'A';
  char *str2 = 'B';
  swap(str1, str2);
  printf("str1 is %c, str2 is %c", str1, str2);
  getchar();
  return 0;
}
