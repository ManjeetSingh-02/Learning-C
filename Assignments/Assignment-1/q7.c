#include <stdio.h>

void main() {
	int angle1 , angle2 , angle3 ;
	printf("Input the angles of triangles separated by comma: ") ;
	scanf("%d,%d", &angle1 ,&angle2) ;
	
	angle3 = 180 - (angle1 + angle2) ;
	printf("Third angle of triangle is: %d", angle3) ;
	return 0 ;
}
