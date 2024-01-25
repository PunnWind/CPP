#include <stdio.h>
void hello(void);
void age(void);

main(){
	hello(); 
	age();
}

void hello(void){
	printf("Hello World\n");
	printf("Design by Pannawit\n");
}

void age(void){
	int year  = 2567;
	int birthyear = 2549;
	int age = year - birthyear;
	printf("Age = %d", age);
}
