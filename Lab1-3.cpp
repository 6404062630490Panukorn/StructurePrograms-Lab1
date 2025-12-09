#include <stdio.h>

int main(void){
	
	int good1, good2, good3;
	float promoA, promoB, promoC, vatA, vatB, vatC, vgood1, vgood2, vgood3;
	
	scanf("%d", &good1);
	promoA = good1 * 0.05;
	vatA = (good1 - promoA) * 7 /100;
	vgood1 = (good1 - promoA) + vatA;
	printf("PromoA : %.2f\n", vgood1);
	
	scanf("%d", &good2);
	promoB = (good1 + good2) * 0.15;
	vatB = ((good1 + good2) - promoB) * 7 / 100;
	//printf("%f", vatB);
	vgood2 = (good1 + good2 - promoB) + vatB;
	printf("PromoB : %.2f\n", vgood2);
	
	scanf("%d", &good3);
	promoC = (good1 + good2 + good3) * 0.3;
	vatC = ((good1 + good2 + good3) - promoC)* 7 / 100;
	vgood3 = (good1 + good2 + good3 - promoC) + vatC;
	printf("PromoC ; %.2f\n", vgood3);
	
	return 0;
}
