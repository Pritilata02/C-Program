#include <stdio.h>
#include <string.h>
int main()
{
  char str1[100],str2[100];
  printf("Enter the 1st string: ");
  scanf("%s",&str1); 
  printf("Enter the 2nd string: ");
  scanf("%s",&str2); 
  printf("Merged string is = %s\n",  strcat(str1, str2) ); 
}
