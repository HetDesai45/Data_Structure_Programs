#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    
    printf("Enter a string: ");
    scanf("%s",str);
    printf("\nReverse of string: %s",strrev(str));
    return 0;
}