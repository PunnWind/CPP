#include <stdio.h>
float price(int hour);
void exchange(int paid,int hour);

main(){
	int hour,paid;
	float total;
	printf("Enter Hour : "); scanf("%d",&hour);
	printf("Total : %.2f\n",price(hour));
	printf("Paid : "); scanf("%d",&paid);
	exchange(paid,hour);
	
}

float price(int hour){
	float total = hour*350;
	return total;
}

void exchange(int paid,int hour){
	float change;
	change = paid - price(hour);
	printf("Change : %.2f",change);
}
