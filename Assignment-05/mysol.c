#include <stdio.h>



int main(void){
	int inputSecs, hours, minutes, seconds;

	printf("Please enter a value in seconds:");
	scanf("%d", &inputSecs);
	hours = (int)(inputSecs / 3600);
	minutes = (int)((inputSecs% 3600)/60);
	seconds = (int)((inputSecs% 3600)%60);


	printf("Converted values are(H:M:S): %d:%d:%d\n", hours, minutes, seconds);
	
}
