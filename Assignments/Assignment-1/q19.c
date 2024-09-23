#include <stdio.h>

int main() {
	float a , cel ;
	
	printf("Enter Temp in Fahrenheit : ") ;
	scanf("%f", &a) ;
	cel = 5*((a-32)/9);
	printf("Celsius = %f \n", cel) ;
}