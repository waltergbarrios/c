#include <stdio.h>
int main()
{
	int dividendo, divisor, resto;
	int contador = 0;
	printf ("Introduce dividendo y divisor : \n");
	scanf("%d %d", &dividendo, &divisor);
	while (dividendo >= divisor) /* solo sigo si es mayor */
	{
		resto = dividendo % divisor; /* hago la division */
		dividendo = dividendo / divisor;
		printf("%9d", resto); /* a la derecha */
		contador++; /* aumento contador de divisiones */
	}
	printf ("\nEl dividendo es %d\n", dividendo);
	printf("Numero de divisiones : %d \n", contador);
}
