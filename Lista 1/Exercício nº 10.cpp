#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL,"portuguese");
		
	int salmin, kw;
	float pkw, vpr, vp;
	
	printf("Digite o slaário mínimo e a quantidade de quilowatts: ");
	scanf("%d %d", &salmin, &kw);
	
	pkw=salmin/5.0;
	vpr=pkw*kw;
	vp=vpr-(vpr*(15/100.0));
	
	printf("a)Valor do quilowatt: %.2f\nb)Valor a ser pago: %.2f\nc)Valor a ser pago com desconto: %.2f", pkw, vpr, vp);
		
	
	return 0;
}
