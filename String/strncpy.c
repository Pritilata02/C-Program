#include <stdio.h>
#include <string.h>
int main()
{
  char str1[100],str2[100];
  int n;
  printf("Enter the 1st string: ");
  scanf("%s",&str1); 
  printf("enter n char :");
  scanf("%d",&n);
  printf("Copied string is = %s\n",  strncpy(str2, str1,n) );
}
