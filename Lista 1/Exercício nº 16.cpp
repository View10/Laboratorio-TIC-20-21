#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL,"portuguese");
		
	int n, maior=0, menor=0;
	
	for(int i=1;i<=15;i++){
		n=rand()%100;
		
		printf("%d ", n);
		
		if(i==1)
			menor=n;
		if(n>maior)
			maior=n;
		if(n<menor)
			menor=n;		
	}	
	
	printf("Maior: %d\nMenor: %d", maior, menor);
	
	return 0;
}
