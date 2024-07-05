#include <stdio.h>

int main (void) {
        int userChoice;
        
        
        printf("Choose a number between 1 and 500:");
        if((scanf("%d", &userChoice) == -1)|(userChoice < 1) | (userChoice > 500)){
                printf("Please enter a valid integer between 1 and 500!");
        }
        switch (userChoice) {
                case 1 ... 100:
                        printf("Your number lies between 1 and 100\n");
                        break;
                case 101 ... 200:
                        printf("Your number lies between 101 and 200\n");
                        break;
                case 201 ... 300:
                        printf("Your number lies between 201 and 300\n");
                        break;
                case 301 ... 400:
                        printf("Your number lies between 301 and 400\n");
                        break;
                case 401 ... 500:
                        printf("Your number lies between 401 and 500\n");
                        break;
                default:
                        printf("Number is out of range.\n");
                        return -1;
        }
}
