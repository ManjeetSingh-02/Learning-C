#include <stdio.h>

int main() {
	int age[] = {11 , 22 , 33 , 44} ;
	int *p1 = age ; // 11
	int *p2 = &age[0] ; // 11 - proper
	int *p3 = &age ; // 11 - improper
	return 0 ;
}
