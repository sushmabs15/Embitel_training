/*1. Write program to reverse number*/

#include<stdio.h>
int main(){
	int num, rem, sum = 0;
	printf("Enter the number: ");
	scanf("%d",&num);
	while(num != 0){
		rem = num % 10;
		sum = sum * 10 + rem;
		num = num / 10;
	}
	printf("The reversed number is %d\n", sum);
}

