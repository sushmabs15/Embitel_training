#include <stdio.h>
int main()
{
    int decimal_num, c, result;
    printf("Enter number: \n");
    scanf("%d", &decimal_num);
    for (c = 10; c >= 0; c--)
    {
        result = decimal_num >> c;
        if (result & 1)
            printf("1");
        else
            printf("0");
    }
    printf("\n");
    return 0;
}
