#include <stdio.h>
const float PI = 3.14;
void circle(int rad);


main(){
	int rad;
	printf("Enter radius:"); scanf("%d",&rad);
	circle(rad);
}

void circle(int rad){
	float area;
	area = PI*rad*rad;
	printf("Area is %.2f\n",area);
}
