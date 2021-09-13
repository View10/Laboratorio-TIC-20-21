#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL,"portuguese");
		
	int nimp, n;
	
	for(int i=0;i<=500;i++){
		n=3*i;
		if(i%2!=0)
			nimp+=n;
	}	
	
	printf("A soma é = %d", nimp);
	
	return 0;
}
