#include <stdio.h>


int main (void){
	int numer, denom;
	
	printf("Enter a numerator:");
	scanf("%d",&numer);
	printf("Enter a denominator:");
	scanf("%d",&denom);
	if((numer % denom)!= 0){
		printf("There is a remainder\n");
		return 0;
	}
	printf("remainder is not there\n");
	return 0;
}
