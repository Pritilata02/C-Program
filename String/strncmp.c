#include <stdio.h>
#include <string.h>
int main()
{
  char str1[100],str2[100];
  int n;
  printf("Enter the 1st string: ");
  scanf("%s",&str1); 
  printf("Enter the 2nd string: ");
  scanf("%s",&str2); 
  printf("enter n char of 2nd str:");
  scanf("%d",&n);
  printf("compared string value is = %d\n",  strncmp(str1, str2,n) );
}
