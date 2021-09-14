#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL,"portuguese");
		
	int n, resul=1;
	
	printf("Digite um nº: ");
	scanf("%d", &n);
	 
	for(int i=1;i<=n;i++){
		if(i==n){
			resul*=i;
			printf("%d = %d", i, resul);
			break;
		}
		resul*=i;
		printf("%d x ", i);
		
	}	
	
	return 0;
}
