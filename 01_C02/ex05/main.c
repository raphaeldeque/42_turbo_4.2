#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int main(void)
{	
	char alpha[] = "abracadabra";
	char empty[] = "";
	char num[] = "ABCDE";

	int res;
	res = ft_str_is_uppercase(alpha);
	printf("%s: %d\n", alpha, res);
	res = ft_str_is_uppercase(empty);
	printf("%s: %d\n", empty, res);
	res = ft_str_is_uppercase(num);
	printf("%s: %d\n", num, res);

}
