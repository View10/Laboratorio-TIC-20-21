#include<stdio.h>
#include<math.h>

main(){
	float a, b, c, d, x1, x2;
	
	printf("Digite 3 numeros:");
	scanf("%f %f %f", &a, &b, &c);
	
	if(a!=0){
		d=(pow(b,2))+4*a*c;
		
		if(d==0){
			x1=x2=(-b)/2*c;
			printf("X1=%.2f", x1);
		}
		
		else if(d>0){
			x1=(-b+sqrt(d))/2*c;
			x2=(-b-sqrt(d))/2*c;
			printf("X1=%.2f \nX2=%.2f", x1, x2);
		}
		else if(d<0)
			printf("Impossível");
	}
	else
		printf("A nao pode ser igual a 0");
	
	return 0;
}
