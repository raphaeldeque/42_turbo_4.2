#include <stdio.h>

char	*ft_strupcase(char *str);

int main(void)
{	
	char alpha[] = "abracadabra";
	char empty[] = "8 * 0)(";
	char text[] = "42 bOrn to BE rooT 12345";

	char *res;
	res = ft_strupcase(alpha);
	printf("%s\n", res);
	res = ft_strupcase(empty);
	printf("%s\n", res);
	res = ft_strupcase(text);
	printf("%s\n", res);

}
