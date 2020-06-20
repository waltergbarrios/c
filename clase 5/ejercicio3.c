#include <stdio.h>

int main()
{
	int i, auxNro, cantNroIngresar, contIgual0, contMenor0, contMayor0;
	printf("Cuantos nros quiere ingresar? ");
	scanf("%i", &cantNroIngresar);
	
	contIgual0 = 0;
	contMenor0 = 0;
	contMayor0 = 0;
	

    for (i=1; i<=cantNroIngresar; i++) { 
    	printf("Ingrese un nro: ");
    	scanf("%i", &auxNro);
    	
    	if(auxNro < 0)
    		contMenor0 = contMenor0 + 1;
    	else if (auxNro == 0)
    		contIgual0 = contIgual0 + 1;
    	else 
    	    contMayor0 = contMayor0 + 1;
	}
	
	printf("Cantidad menor a cero %i, igual a cero %i, mayor a cero %i ", contMenor0, contIgual0, contMayor0 );
	

    return 0;
	
}
