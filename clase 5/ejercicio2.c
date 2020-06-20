#include <stdio.h>
#include <stdlib.h>

int main()
{
	int nroAdivinar, intentos, nroBuscado;
	intentos = 10;
	nroBuscado = rand () % 101 + 1;
	do
	{
		printf("Ingrese nro a adivinar ");
		scanf("%i", &nroAdivinar);
		
		if(nroAdivinar == nroBuscado)
			break;
		else
			intentos = intentos - 1;
		
	}	
	while(intentos > 0);
	
	

}	
