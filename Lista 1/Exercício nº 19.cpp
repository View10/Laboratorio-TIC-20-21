#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL,"portuguese");
		
	int n=0, n1=1, fib;
	
	printf("Sequência de Fibonacci até ao vigésimo termo:\n"); 
	
	for(int i=1;i<=20;i++){
		printf("%d ", n);
		fib=n+n1;
		n=n1;
		n1=fib;
	}	
	return 0;
}
