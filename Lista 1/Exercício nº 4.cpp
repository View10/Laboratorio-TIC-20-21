#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL,"portuguese");
		
	int sal;
	float novosal;
	
	printf("Digite o sal�rio: ");
	scanf("%d", &sal);
	
	novosal=sal+(sal*(25/100.0));
	
	printf("O novo sal�rio �: %.2f", novosal);	
	
	return 0;
}
