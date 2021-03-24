//Cálculo de potencia sem função recursiva e sem multiplicação
#include <stdio.h>

int main(void)
{
  	int base;
	int expo, aux;
	int resultado;
  
	printf("Digite no numero da base: ");
	scanf("%d",&base);
  
	printf("Digite o numero do exponente: ");
	scanf("%d",&expo);

		if (expo==0) {
			resultado = 1;
		}
		else {
			aux = base;
  			for(int i=0; i < expo-1; i++){
    			resultado = 0;
				for(int j= 0; j < aux; j++){
				resultado = resultado + base;
				}
			aux = resultado;
  			}
		}
	printf("%d",resultado);

}

/*TESTE DE MESA
recebe o valor de base 2
recebe o valor de expo 4

expo != 0

entra no for

i=0 <4-1 i++
resultado 2
aux = 4

i=1 <3 i++
resultado = 4
aux = 8

i=2 <3 i++
resultado = 8
aux = 16

*/