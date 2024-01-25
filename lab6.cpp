#include <stdio.h>
void triangle(int base, int high);

main(){
	int b,h;
	printf("Enter base:"); scanf("%d" ,&b);
	printf("Enter high:"); scanf("%d" ,&h);
	triangle (b,h);
}

void triangle(int base, int high){
	float area;
	area = 0.5*base*high;
	printf("Area is %.2f\n",area);
}
