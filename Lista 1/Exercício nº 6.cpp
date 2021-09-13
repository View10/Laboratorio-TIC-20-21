#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL,"portuguese");
		
	int custo, preco, cont, a;
	
	printf("Digite o custo do espetáculo e o preço do convite:");
	scanf("%d %d", &custo, &preco);
	
	a=preco;
	
	while(preco<=custo){
		preco+=a;
		cont++;
	}	
	
	printf("É necessário vender %d convites", cont);
	
	return 0;
}
