#include <stdio.h>
#include <math.h>
#define MAX_GAME 4
#define MAX_PLAYERS 5


int main(void){
	double gamePlayersGrid[4][5];
	double highscoreArray[5];
	double highestScore = 0;
	for(int row=0;row<MAX_GAME;row++){
		printf("Game %d\n",row+1);
		for(int col=0;col<MAX_PLAYERS;col++){
			printf("player %d score please:",col+1);
			scanf("%lf", &gamePlayersGrid[row][col]);
		}
	}
	for(int col=0;col<MAX_PLAYERS;col++){
		double temp=0;
		double avg=0;
		for(int row=MAX_GAME-1;row>=0;row--){
			temp += gamePlayersGrid[row][col];
			
		}
		avg = temp/4;
		highscoreArray[col] = avg;

		
	}

	for(int h =0 ; h < MAX_PLAYERS ; h++){
		
		printf("%lf\n", highscoreArray[h]);
		if(highscoreArray[h]>highestScore)
			highestScore = highscoreArray[h];
		
	}
	printf("Highest Score is %2.2f", floor(highestScore));
}
