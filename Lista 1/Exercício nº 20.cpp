#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL,"portuguese");
		
	float altjuca=1.10, altchico=1.50;
	int nanos;
	
	printf("Juca tem %.2f m de altura e Chico tem %.2f m de altura\n", altjuca, altchico);
	altjuca*=100;
	altchico*=100;
	
	while(altjuca<=altchico){
		altjuca+=3;
		altchico+=2;
		nanos++;
	}
	
	printf("Após %d anos, Juca tem %.2f m de altura e Chico tem %.2f m de altura", nanos, (altjuca/100), (altchico/100));
	
	return 0;
}
