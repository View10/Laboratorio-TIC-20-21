#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL,"portuguese");
		
	int rpg;
	float psr;
	
	printf("Digite o peso do saco da ração e a quantidade de ração fornecida por gato: ");
	scanf("%f %d", &psr, &rpg);
	
	psr*=1000;
	
	for(int i=1; i<=5;i++){
		psr-=(rpg*2);
	}	
	
	printf("Após 5 dias sobram %.2f kg", (psr/1000.0));
	
	return 0;
}
