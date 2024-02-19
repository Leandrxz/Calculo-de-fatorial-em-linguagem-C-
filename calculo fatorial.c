#include<stdio.h>
	int main(){

	int i, n;
	int resultado = 1;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	    for ( i = 1; i <= n; ++i) {
        resultado = resultado * i;
    }
    	printf("O fatorial desse numero é %d", resultado);

    }
