#include <stdio.h>
//Convert Decimal Number to Binary Number
int main(){
	int decimal,binary = 0,base = 1;

	while(1){
		printf("Enter a Decimal Number: ");
		scanf("%d",&decimal);
		
		while(decimal>0){
			binary = binary + decimal%2*base;
			base = base*10;
			decimal = decimal/2;
			
		}
		printf("Binary is %d\n",binary);
	}
	return (0);
}
