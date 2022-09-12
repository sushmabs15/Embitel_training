#include<stdio.h>
int main(){
	unsigned int num, ret, nbits, value;
	printf("Enter the number: ");
	scanf("%x", &num);

	unsigned int pos;
	printf("Enter the position: ");
	scanf("%x", &pos);

	printf("Enter the number of bits: ");
	scanf("%x", &nbits);

	value = (1 << nbits) - 1;

	ret = num & (~(value << pos));

	printf("Clear bit value is 0x%x",ret);

	return 0;
}