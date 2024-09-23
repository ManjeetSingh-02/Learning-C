#include <stdio.h>
#include <stdlib.h>

void MPECADDER(int) ;
int ans = 0 ;

int main(int argc , char *argv[]) {

    int i ;

    for(i = 0 ; i < argc ; i++) {
        MPECADDER(atoi(argv[i])) ;
    }

    printf("%d", ans) ;

    return 0 ;
}

void MPECADDER(int x) {
    ans = ans + x ;
}