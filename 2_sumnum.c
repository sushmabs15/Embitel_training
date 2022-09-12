#include<stdio.h>
int main(){
	int num, rem, sum = 0;
	printf("Enter the number: ");
	scanf("%d",&num);
	while(num > 10){
		sum = 0;
		while(num != 0){
			rem = num % 10;
			sum = sum + rem;
			num = num / 10;
		}
		num = sum;
	}
	printf("The reversed number is %d\n", sum);
}

