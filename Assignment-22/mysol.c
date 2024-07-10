#include <stdio.h>
#define NUM_OF_GAMES 5 
struct player_data_t{
	float player_points;
	float number_of_games;
};

struct player_data_t player_db[NUM_OF_GAMES];
int main(){
	for(int i=0; i <NUM_OF_GAMES; i++){
		
		printf("Enter Player %d's point total:", i+1);
		scanf("%f", &player_db[i].player_points);

		printf("Enter Player %d's game total:", i+1);
		scanf("%f", &player_db[i].number_of_games);
		

	} 
	
	for(int j=0; j <NUM_OF_GAMES; j++){
		printf("Player %d's scoring avg was %2.2f ppg\n", j+1, (player_db[j].player_points)/(player_db[j].number_of_games));
	}
}
