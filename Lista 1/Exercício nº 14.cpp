#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL,"portuguese");
		
	int n, par, impar, contp, conti;
	float mp, mi;
	
	for(int i=1;i<=10;i++){
		printf("Digite um n�: ");
		scanf("%d", &n);
		
		if(n%2==0){
			par+=n;
			contp++;
		}else{
			impar+=n;
			conti++;
		}
	}
	
	mp=par/contp;
	mi=impar/conti;
	
	printf("M�dia de pares: %.2f\nM�dia de �mpares: %.2f", mp, mi);	
	
	return 0;
}
