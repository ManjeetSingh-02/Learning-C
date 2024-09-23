#include <stdio.h>
#include <stdlib.h>

struct student {
	int id ;
	char name[10] ;
	int marks ;
    struct student *next ;
};

int main() {

	int i , n ;
    struct student *arr = NULL ;

    printf("Enter total no of students: ") ;
    scanf("%d", &n) ;

	for(i = 0 ; i < n ; i++) {

        struct student *temp ;

        temp = (struct student *) malloc(sizeof(struct student)) ;
        temp->next = NULL ;

        printf("Enter ID of %d student ", i+1) ;
		scanf("%d", &temp->id) ;
		printf("Enter Name of %d student ", i+1) ;
		scanf("%s", &temp->name) ;
		printf("Enter Marks of %d student ", i+1) ;
		scanf("%d", &temp->marks) ;

        if(arr == NULL) {
            arr = temp ;
        }
        else {
            struct student *p ;
            p = arr ;
            while(p->next != NULL) {
                p = p->next ;
            }
            p->next = temp ;
        }
	}

    struct student *p ;
    p = arr ;
    i = 1 ;
    while(p != NULL) {
        printf("\nID of student %d is %d", i , arr->id) ;
		printf("\nName of student %d is %s", i , arr->name) ;
		printf("\nMarks of student %d is %d", i , arr->marks) ;
        p = p->next ;
        i++ ;
    }
	
	return 0 ;
}