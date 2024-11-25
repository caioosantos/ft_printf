#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	// char
	printf("Char\n");
	printf("%c\n", '0');
	ft_printf("%c\n", '0');

	printf("\nString\n"); // string

	printf("%s\n", "Birl!!");
	ft_printf("%s\n", "Birl!!");

	printf("\nD Inteiro\n"); // inteiro D

	printf("%d\n", -100);
	ft_printf("%d\n", -100);

	printf("\nInt Inteiro\n"); // inteiro I

	printf("%i\n", -110);
	ft_printf("%i\n", -110);

	printf("\nU Positivo\n"); // inteiro U

	printf("%u\n", -10);
	ft_printf("%u\n", -10);

	printf("\n"); // inteiro %

	printf("%%\n");
	ft_printf("%%\n");


	return (0);
}
