#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL,"portuguese");
		
	int lado1, lado2, area;
	
	printf("Digite a dimensão dos dois lados: ");
	scanf("%d %d", &lado1, &lado2);
	
	area=lado1*lado2;
	
	printf("A área é = %d", area);
	
	
	return 0;
}
