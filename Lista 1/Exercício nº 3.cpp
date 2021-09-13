#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL,"portuguese");
		
	int dataNascimento, anoAtual, idade, idade50;
	
	printf("Digite a daa de nascimento e o ano atual: ");
	scanf("%d %d", &dataNascimento, &anoAtual);
	
	idade=anoAtual-dataNascimento;
	idade50=(2050-anoAtual)+idade;
	
	printf("a)Essa pessoa tem %d anos\nb)Essa pessoa terá %d anos", idade, idade50);
	
	return 0;
}
