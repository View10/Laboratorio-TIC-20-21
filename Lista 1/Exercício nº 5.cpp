#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL,"portuguese");
		
	int sal, perc;
	float novosal;
	
	printf("Digite o salário e o percentual de aumento: ");
	scanf("%d %d", &sal, &perc);
	
	novosal=sal+(sal*(perc/100.0));
	
	printf("O novo salário é: %.2f", novosal);
	
	return 0;
}
