#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL,"portuguese");
		
	int salmin, sal, qsm, a;
	
	printf("Digite o sal�rio m�nimo e o sal�rio: ");
	scanf("%d %d", &salmin, &sal);
	
	a=salmin;
	
	while(salmin<=sal){
		salmin+=a;
		qsm++;
	}
	
	printf("O n� de sal�riod m�nimos � = %d", qsm);
	
	
	return 0;
}
