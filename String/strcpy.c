#include <string.h>
#include <stdio.h>
int main()
{
  char str1[100],str2[100];
  printf("Enter a string: ");
  scanf("%s",&str1);    
  printf("Copied string is= %s\n", strcpy(str2,str1)); 
}
