#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL,"portuguese");
		
	int custo, preco, cont, a;
	
	printf("Digite o custo do espet�culo e o pre�o do convite:");
	scanf("%d %d", &custo, &preco);
	
	a=preco;
	
	while(preco<=custo){
		preco+=a;
		cont++;
	}	
	
	printf("� necess�rio vender %d convites", cont);
	
	return 0;
}
