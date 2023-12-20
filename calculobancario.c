#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char* argv[])

{
	float principal = 2000.00;
	float taxa = 0.03; // 3%
	int meses = 12;

	float montante = principal * pow((1 + taxa), meses);
	float juros = montante - principal;

	printf("O total de juros a ser pago é: %f\n", juros);
	printf("O montante a ser pago é: %f", montante);

	printf("\n\n");
	system("pause");
	return 0;
}



