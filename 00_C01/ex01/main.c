#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int *nbr;
	int **nbr2;
	int ***nbr3;
	int ****nbr4;
	int *****nbr5;
	int ******nbr6;
	int *******nbr7;
	int ********nbr8;
	int *********nbr9;
	int number;

	nbr = &number;
	nbr2 = &nbr;
	nbr3 = &nbr2;
	nbr4 = &nbr3;
	nbr5 = &nbr4;
	nbr6 = &nbr5;
	nbr7 = &nbr6;
	nbr8 = &nbr7;
	nbr9 = &nbr8;
	ft_ultimate_ft(nbr9);
	printf("var number: %d\n*********nbr9 pointer: %d\nnbr9 address:%p\n", number, *********nbr9, nbr9);
	return(0);
}