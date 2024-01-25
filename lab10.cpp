#include <stdio.h>
void input(int hour);

main(){
	int hour;
	printf("Enter Hour : "); scanf("%d",&hour);
	input(hour);
}

void input(int hour){
	float total;
	total = hour*450;
	printf("Total : %.2f",total);
}
