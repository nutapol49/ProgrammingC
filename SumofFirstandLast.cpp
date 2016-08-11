#include <stdio.h>
int main(){
	int first,last,sum = 0;
	long long num;
	
	printf("Enter a number: ");
	scanf("%d",&num);
	
	last = num%10;
	while(num>0){
		first = num;
		num /= 10;
	}
	sum = first + last;
	printf("Sum of Number first and last is %d",sum);
	
	return 0;
}
