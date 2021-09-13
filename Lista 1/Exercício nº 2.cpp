#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL,"portuguese");
		
	int salmin, sal, qsm, a;
	
	printf("Digite o salário mínimo e o salário: ");
	scanf("%d %d", &salmin, &sal);
	
	a=salmin;
	
	while(salmin<=sal){
		salmin+=a;
		qsm++;
	}
	
	printf("O nº de saláriod mínimos é = %d", qsm);
	
	
	return 0;
}
