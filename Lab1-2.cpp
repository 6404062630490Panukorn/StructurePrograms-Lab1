#include <stdio.h>

int main(void){
	
	int good1, good2, good3;
	float promoA, promoB, promoC, vatA, vatB, vatC;
	
	scanf("%d", &good1);
	promoA = good1 * 0.05;
	vatA = (good1 - promoA) * 7 /100;
	//printf("%f", vatA);
	printf("PromoA : %.2f\n", good1 - promoA);
	
	scanf("%d", &good2);
	promoB = (good1 + good2) * 0.15;
	vatB = (good1 + good2) - promoB * 7 / 100;
	printf("PromoB : %.2f\n", (good1 + good2) - promoB);
	
	scanf("%d", &good3);
	promoC = (good1 + good2 + good3) * 0.3;
	//printf("%f", promoC);
	vatC = (good1 + good2 + good3) - promoC * 7 / 100;
	printf("PromoC ; %.2f\n", (good1 + good2 + good3) - promoC);
	
	return 0;
}
