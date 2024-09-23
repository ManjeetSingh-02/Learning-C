#include <stdio.h>

struct student {
	int id ;
	char name[10] ;
	int marks ;
};

int main() {
	int i ;
	struct student arr[3] ;
	
	for(i = 0 ; i < 3 ; i++) {
		printf("Enter ID of %d student ", i+1) ;
		scanf("%d", &arr[i].id) ;
		printf("Enter Name of %d student ", i+1) ;
		scanf("%s", &arr[i].name) ;
		printf("Enter Marks of %d student ", i+1) ;
		scanf("%d", &arr[i].marks) ;
	}
	
		for(i = 0 ; i < 3 ; i++) {
		printf("\nID of student %d is %d", i+1 , arr[i].id) ;
		printf("\nName of student %d is %s", i+1 , arr[i].name) ;
		printf("\nMarks of student %d is %d", i+1 , arr[i].marks) ;
	}
	
	return 0 ;
}