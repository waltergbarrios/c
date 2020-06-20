#include <stdio.h>

int main()
{
	int num, resul;
	printf("Ingrese un nro: ");
	scanf("%d", &num);
	resul = num;
	num = num - 1;
	while(num > 0)
	{
		resul = resul * num;
		num = num - 1;
	}
	
	printf("Factorial es: %i ", resul);
	return 0;
}
