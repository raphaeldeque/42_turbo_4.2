#include <stdio.h>

int	match(char *s1, char *s2);

int	main(void)
{
	// int i;
	char *s0 = "";

	char *s1 = "ABCDE";
	char *s2 = "*ABCDE";
	char *s3 = "****ABCDE";
	char *s4 = "*CDE";
	char *s5 = "**CDE*";
	char *s6 = "*****E";
	char *s7 = "*";

	char *s8 = "";
	char *s9 = "*BCD";
	char *s10 = "ABCD";
	char *s11 = "BCDE";
	char *s12 = "***A**B***C***F**";

	// i = 0;
	// while (++i <= 12)
	printf("%s\n%s\n%d\n\n", s0, s1, match(s0, s1));
	printf("%s\n%s\n%d\n\n", s0, s2, match(s0, s2));
	printf("%s\n%s\n%d\n\n", s0, s3, match(s0, s3));
	printf("%s\n%s\n%d\n\n", s0, s4, match(s0, s4));
	printf("%s\n%s\n%d\n\n", s0, s5, match(s0, s5));
	printf("%s\n%s\n%d\n\n", s0, s6, match(s0, s6));
	printf("%s\n%s\n%d\n--------------\n", s0, s7, match(s0, s7));
	printf("%s\n%s\n%d\n\n", s0, s8, match(s0, s8));
	printf("%s\n%s\n%d\n\n", s0, s9, match(s0, s9));
	printf("%s\n%s\n%d\n\n", s0, s10, match(s0, s10));
	printf("%s\n%s\n%d\n\n", s0, s11, match(s0, s11));
	printf("%s\n%s\n%d\n\n", s0, s12, match(s0, s12));


	return (0);
}