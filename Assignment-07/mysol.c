#include <math.h>
#include <stdio.h>



int main(void){
	double A,B,C;
	A = B = C = 0;


	printf("Enter values of A, B, C respectively\n press enter to log each value:");
	scanf("%lf", &A);
	scanf("%lf", &B);
	scanf("%lf", &C);
	
	double answerP = ((sqrt(pow(B, 2.0) - (4*A*C))) - B)/(2*A);
	
	double answerN = (-(sqrt(pow(B, 2.0) - (4*A*C))) - B)/(2*A);
	printf("%lf%lf", answerP, answerN);



	return 0;
}
