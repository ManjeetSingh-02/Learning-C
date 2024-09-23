#include <stdio.h>

int main() {
    int op ;
    
    printf("Welcome to Guess the Number Game\n0 - End Game\n1 - Easy\n2 - Medium\n3 - Hard\nEnter Your Difficulty Level : ");
    scanf("%d", &op);
    
    if (op == 0) {
        printf("Good bye , we hope to see you soon again");
    }
    else if (op == 1) {
        int ch = 10 , x , cs = 0 ;
        srand(time(0));
        int genrnum = 1 + (rand() % 100);
        
        printf("You have to guess a number between 1-100 and you have 10 choices");
        
        while (cs == 0 && ch > 0) {
            printf("\nEnter a number : ");
            scanf("%d", &x);
            
            if (x == genrnum) {
                printf("\nYou guessed the correct number which is %d",genrnum);
                cs = 1;
            }
            else if (x > genrnum) {
                ch--;
                printf("\nYou guessed the number which is greater than the generated number and you have %d choices left", ch);
            }
            else {
                ch--;
                printf("\nYou guessed the number which is smaller than the generated number and you have %d choices left", ch);
            }
            
            if (ch == 0) {
                cs = 1;
                printf("\nAs your choices left are 0 , so the generated number is %d", genrnum);
            }
        }
    }
    else if (op == 2) {
        int ch = 7 , x , cs = 0 ;
        srand(time(0));
        int genrnum = 1 + (rand() % 100);
        
        printf("You have to guess a number between 1-100 and you have 7 choices");
        
        while (cs == 0 && ch > 0) {
            printf("\nEnter a number : ");
            scanf("%d", &x);
            
            if (x == genrnum) {
                printf("\nYou guessed the correct number which is %d",genrnum);
                cs = 1;
            }
            else if (x > genrnum) {
                ch--;
                printf("\nYou guessed the number which is greater than the generated number and you have %d choices left", ch);
            }
            else {
                ch--;
                printf("\nYou guessed the number which is smaller than the generated number and you have %d choices left", ch);
            }
            
            if (ch == 0) {
                cs = 1;
                printf("\nAs your choices left are 0 , so the generated number is %d", genrnum);
            }
        }
    }
    else if (op == 3) {
        int ch = 5 , x , cs = 0 ;
        srand(time(0));
        int genrnum = 1 + (rand() % 100);
        
        printf("You have to guess a number between 1-100 and you have 5 choices");
        
        while (cs == 0 && ch > 0) {
            printf("\nEnter a number : ");
            scanf("%d", &x);
            
            if (x == genrnum) {
                printf("\nYou guessed the correct number which is %d",genrnum);
                cs = 1;
            }
            else if (x > genrnum) {
                ch--;
                printf("\nYou guessed the number which is greater than the generated number and you have %d choices left", ch);
            }
            else {
                ch--;
                printf("\nYou guessed the number which is smaller than the generated number and you have %d choices left", ch);
            }
            
            if (ch == 0) {
                cs = 1;
                printf("\nAs your choices left are 0 , so the generated number is %d", genrnum);
            }
        }
    }
    else {
        printf("Please play according to game rules");
    }
}