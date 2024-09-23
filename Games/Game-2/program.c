#include <stdio.h>

int main() {
	
	int i , j , lead , lp , p1_lead = 0 , p2_lead = 0 , p1_cs = 0 , p2_cs = 0 ;
	int p1_scores[5] , p2_scores[5] ;
	
	for(i = 0 ; i < 5 ; i++) {
		printf("\nEnter Score of P1->R%d: ", i+1) ;
		scanf("%d", &p1_scores[i]) ;
		
		printf("\nEnter Score of P2->R%d: ", i+1) ;
		scanf("%d", &p2_scores[i]) ;
		
		p1_cs = p1_cs + p1_scores[i] ;
		p2_cs = p2_cs + p2_scores[i] ;
		
		if (p1_cs > p2_cs) {
			if (p1_lead < (p1_cs - p2_cs)) {
				p1_lead = p1_cs - p2_cs ;
			}
			lead = p1_cs - p2_cs ;
			lp = 1 ;
		}
		else {
			if (p2_lead < (p2_cs - p1_cs)) {
				p2_lead = p2_cs - p1_cs ;
			}
			lead = p2_cs - p1_cs ;
			lp = 2 ;
		}
		
		printf("\n%d \t %d \t %d \t %d \t Player%d", i+1 , p1_cs , p2_cs , lead , lp) ;
	}
	
	if (p1_lead > p2_lead) {
		printf("\nPlayer 1 is winner having maximum lead of %d", p1_lead) ;
	}
	else {
		printf("\nPlayer 2 is winner having maximum lead of %d", p2_lead) ;
	}
	
	return 0 ;
}
