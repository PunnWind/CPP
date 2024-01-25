#include <stdio.h>
float square(int width, int lenght);

main(){
	printf("Area is %.2f",square(2,5));
}

float square(int width, int lenght){
	float area;
	area = width*lenght;
	return area;
}


