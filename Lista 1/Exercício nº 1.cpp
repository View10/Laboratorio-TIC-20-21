#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL,"portuguese");
		
	int lado1, lado2, area;
	
	printf("Digite a dimens�o dos dois lados: ");
	scanf("%d %d", &lado1, &lado2);
	
	area=lado1*lado2;
	
	printf("A �rea � = %d", area);
	
	
	return 0;
}
