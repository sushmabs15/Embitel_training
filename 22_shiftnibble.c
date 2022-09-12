#include<stdio.h>

int main()
{
    unsigned int num;
    printf("Enter number: ");
    scanf("%x", &num);
    printf("After swapping nibbles : 0x%x", ((num & 0x0F) << 4 | (num & 0xF0) >> 4));

    return 0;
}