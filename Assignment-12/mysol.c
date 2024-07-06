#include<stdio.h>
#include<stdlib.h>
#include<time.h>



int main(){
	int numFlips = 0;
	int init, head, tail;
	printf("Enter number of times u wanna flip the coin?");
	scanf("%d", &numFlips);
	srand(time(NULL));

	for(init=0 ;init<numFlips; init++){
		if(rand()%2==0){
			head++;
		}
		else{
			tail++;
		}

	}

	printf("Coin was flipped %d times and heads came %d times and tails came %d times\n", numFlips, head, tail);
}
