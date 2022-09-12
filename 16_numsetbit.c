#include<stdio.h>
int main()
{
    unsigned int num;
    int count = 0; 
    printf("Enter the number: ");
    scanf("%x", &num);
    while (num != 0)
    {
        if ((num & 1) == 1)
            count++;
        num = num >> 1;
    }
    printf("number of one's are :%d\n", count);
    return 0;
}