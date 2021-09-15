#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL,"portuguese");
		
	int d;
	float p, lh;
	char n[30];
	
	for(int i=1;i<=30;i++){
		printf("Digite o nome: ");
		gets(n);
		
		printf("Digite o nº de diárias: ");
		scanf("%d", &d);
		
		if(d<15){
			p=(d*50.0)+(d*4.0);
			lh+=p;
			printf("Senhor(a) %s deve %.2f USD\n", n, p);
		}else if(d==15){
			p=(d*50.0)+(d*3.60);
			lh+=p;
			printf("Senhor(a) %s deve %.2f USD\n", n, p);
		}else if(d>15){
			p=(d*50.0)+(d*3.0);
			lh+=p;
			printf("Senhor(a) %s deve %.2f USD\n", n, p);
		}
		
		
		if(i==30)
			printf("\nO hotel deverá ganhar %.2f USD", lh);
	}	
	return 0;
}
