#include <stdio.h>
#include <stdlib.h>
int main() {
	float n1, n2;
	
	printf("Informe um numero a ser dividido");
	scanf("%f",&n1);
	
	printf("Sera dividido por qual?");
	scanf("%f",&n2);
	
	//dividendo
	printf("O dividendo e %.2f",n1);
	
	//divisor
	printf("O divisor e %2f",n2);
	
	//quociente
	printf("O quociente e %.2f\n",n1/n2);
	
	//resto
	int resto =(int)n1 % (int)n2;
	printf("O resto da divisao e %d\n",resto);
	return 0;
}
