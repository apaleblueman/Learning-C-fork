#include <stdio.h>
#include <stdbool.h>

int main(void){
        char userChoice;
        double score[10] = {0};
        double sum, count;
        count = 0;
        sum = 0;
       // for(int j =0; j <8;j++){printf("%f", score[j]);}
        for(int i=0;i<8;i++){
              printf("Enter a test score : ");
              scanf("%lf", &score[i]);
              getchar();
              count ++;
              sum += score[i];
              printf("Continue with next score?Y/N:");
              scanf("%c", &userChoice);
              if(userChoice == 'N'){
                        break;
              }
        }
        printf("Averge: %2.2f\n", sum/count);

}
