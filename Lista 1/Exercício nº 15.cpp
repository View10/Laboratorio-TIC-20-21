#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL,"portuguese");
		
	int n;
	
	do{
		printf("Digite um nº: ");
		scanf("%d", &n);
		printf("Sucessor: %d\n", (n+1));
	}while(n>0)	
	
	return 0;
}
