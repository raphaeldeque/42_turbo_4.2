#include <stdio.h>

int	ft_str_is_numeric(char *str);

int main(void)
{	
	char alpha[] = "Abracadabra";
	char empty[] = "";
	char num[] = "598680";

	int res;
	res = ft_str_is_numeric(alpha);
	printf("%s: %d\n", alpha, res);
	res = ft_str_is_numeric(empty);
	printf("%s: %d\n", empty, res);
	res = ft_str_is_numeric(num);
	printf("%s: %d\n", num, res);

}
