#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL,"portuguese");
		
	int pfv, pld, pimp, pv, ld, imp;
	
	printf("Digite o pre�o de f�brica do ve�culo, o percentual de lucro do distribuidor e o percentual de imposto: ");
	scanf("%d %d %d", &pfv, &pld, &pimp);
	
	ld=pfv*(pld/100.0);
	imp=pfv*(pimp/100.0);
	pv=pfv+ld-imp;
	
	printf("a)Lucro do distribuidor: %d\nb)Imposto: %d\nc)Pre�o final do ve�culo: %d", ld, imp, pv);
		
	
	return 0;
}
