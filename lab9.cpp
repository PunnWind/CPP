#include <stdio.h>
void input(int kg,int cm);
float cmm(int cm);

main(){
	int kg, cm;
	printf("Enter weight : "); scanf("%d",&kg);
	printf("Enter height : "); scanf("%d",&cm);
	input(kg,cm);
}

void input(int kg,int cm){
	float bmi = kg/(cmm(cm)*cmm(cm));
	printf("Your bmi is %.2f",bmi);
}

float cmm(int cm){
	float m = cm*0.01;
	return m;
}

