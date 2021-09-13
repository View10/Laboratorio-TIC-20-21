#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL,"portuguese");
		
	int nht, salmin, novosal;
	float ht, salb, imp;
	
	printf("Digite o nº de horas trabalhadas e o salário mínimo: ");
	scanf("%d %d", &nht, &salmin);
	
	ht=salmin/2;
	salb=nht*ht;
	imp=salb*(3/100.0);
	novosal=salb-imp;
	
	printf("O salário a receber é: %d", novosal);
	
	return 0;
}
