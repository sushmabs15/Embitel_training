/*4. Implement code for atoi*/

#include <stdio.h>

int main(void)
{
    char arr[100];
    printf("Enter the string: ");
    scanf("%s", &arr);
    long num = 0;
    int i = 0, flag = 1;
    while (arr[i] == ' ' || arr[i] == '\n' || arr[i] == '\t') {
        i++;
    }

    if (arr[i] == '+' || arr[i] == '-')
    {
        if (arr[i] == '-') {
            flag = -1;
        }
        i++;
    }
 
    
    while (arr[i] && (arr[i] >= '0' && arr[i] <= '9'))
    {
        num = num * 10 + (arr[i] - '0');
        i++;
    }
 
    printf("%ld ", flag *num);
 
    return 0;
}
