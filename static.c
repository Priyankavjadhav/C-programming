	#include <stdio.h>  
	#include<conio.h>
	void func() {  
	   static int i=0;//static variable  
	   int j=0;//local variable  
	   i++;  
	   j++;  
	   printf("i= %d and j= %d\n", i, j);  
	}  
	int main() {  
	  func();  
	  func();  
	  func();  
	  getch();
	  return 0;
}  
