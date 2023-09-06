#include <stdio.h>
#include <string.h>
int main()
{
  char str1[100];
  char n;
  char *p;
  printf("Enter the string: ");
  scanf("%s",&str1); 
  printf("enter a char :");
  scanf("%s",&n);
  p=strrchr(str1,n);
  printf("string is = %s", p );
}
