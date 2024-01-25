#include <stdio.h>
main(){
	int cm;
	float weight, height, BMI;
	printf("Enter weight(Kg):");
	scanf("%f", &weight);
	printf("Enter your height(CM):");
	scanf("%d", &cm);
	height = cm*0.01;
	BMI = weight/(height*height);
	printf("Your BMI is %.3f",BMI);
}
