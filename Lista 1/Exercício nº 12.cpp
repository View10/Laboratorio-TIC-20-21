#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL,"portuguese");
		
	int n, p, s, t, q, qi;
	
	printf("Digite um n�: ");
	scanf("%d", &n);
	
	p=(n/10000)%10;
	s=(n/1000)%10;
	t=(n/100)%10;
	q=(n/10)%10;
	qi=(n/1)%10;
	
	if(p==qi && s==q)
		printf("� pal�ndromo");
	else
		printf("N�o � pal�ndromo");
	
	
	return 0;
}
