#include <stdio.h>
int main()
{
    int i;
    i=0;
    while(i<=255)
    {
        printf("ASCII value of character %c:%d\n", i, i);
        i++;
    }
}
