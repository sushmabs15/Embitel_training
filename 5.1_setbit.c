/*6. Program to set the bit */

#include<stdio.h>
int main(){
	unsigned int num, ret;
	printf("Enter the number: ");
	scanf("%x", &num);

	unsigned int pos;
	printf("Enter the position: ");
	scanf("%x", &pos);

	ret = num | (1 << pos);

	printf("Set bit value is 0x%x",ret);

	return 0;
}
