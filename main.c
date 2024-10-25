#include "libft.h"
#include <stdio.h>
#include <string.h>

char new(unsigned int i, char c)
{
	return ft_toupper(c);
}
void neww(unsigned int i, char *s)
{
	if (s[i] == 'a')
	{
		s[i] = '.';
	}	
}

int main()
{
	printf("ft_isalpha -> a: %s\n", (ft_isalpha('a') == 0) ? "not an alpha !" : "is alpha!");
	printf("ft_isdigit -> 1: %s\n", (ft_isdigit(1) == 0) ? "not a number!" : "is a number!");
	printf("ft_isalnum-> .: %s\n", (ft_isalnum('.') == 0) ? "not a number nor an alpha!" : "is a number or an alpha!");
	printf("ft_isascii-> ':': %s\n", (ft_isascii(':') == 0) ? "is not ascii!" : "is an ascii!");
	printf("ft_isprint-> '~': %s\n", (ft_isprint('~') == 0) ? "is not a printable char!" : "is an printable char!");
	printf("ft_strlen-> Abdo has lenght of : %ld\n", ft_strlen("Abdo"));
	char a[] = "Abdo";
	ft_memset(a, '*', 3);
	printf("ft_memset-> ori: Abdo * in first-3 = %s\n", a);
	char b[] = "abdo";
	ft_bzero(b, 4);
	printf("ft_bzero-> ori: abdo first-4 zero= %s\n", b);
	int c[5] = {1, 2, 3, 4, 5};
	int d[5];
	ft_memcpy(d, c, sizeof(int) * 5);
	printf("ft_memcpy-> ori:1, 2, 3, 4, 5 re with first-4 in d= %d d[4]= %d\n", d[0], d[4]);
	char e[] = "hello worl";
	memmove(e + 2, e, 3);
	printf("ft_memmove-> ori abdo ahdad = %s\n", e);
	char f[10];
	printf("ft_strlcpy->size of it is=%ld and the content of f=%s\n", ft_strlcpy(f, "AHADED", sizeof(f)), f);
	char j[20] = "hello ";
	printf("ft_strlcat->%ld, %s\n", ft_strlcat(j, "world", sizeof(j)), j);
	printf("ft_toupper->%c\n", ft_toupper('c'));
	printf("ft_tolower->%c\n", ft_tolower('C'));
	char *h = ft_strchr(j, 'w');
	printf("ft_strchr->%s\n", h);
	char *i = ft_strrchr(j, 'l');
	printf("ft_strrchr->%s\n", i);
	printf("ft_strncmp->ori=%d, %d\n", strncmp("abdi", "abd", 4), ft_strncmp("abdi", "abd", 4));
	char *l = ft_memchr("Abdo,ahdad", ',', 10);
	printf("ft_memchr->%s\n", l);
	printf("ft_memcmp->ori=%d, %d\n", memcmp("abdu", "abd", 4), ft_memcmp("abdu", "abd", 4));
	printf("ft_strnstr->%s\n", ft_strnstr("abdo s", "o", 1));
	printf("ft_atoi->%d\n", ft_atoi("   12123"));
	char *k = ft_calloc(sizeof("abdo"), sizeof(char));
	printf("ft_calloc->been allocated successfully!%s\n", k);
	printf("ft_strdup->%s\n", ft_strdup("abdo"));
	printf("ft_substr->%s\n", ft_substr("hello world!", 5, 7));
	printf("ft-strjoin->%s\n", ft_strjoin("hello", " world!"));
	printf("ft_strtrim->%s\n", ft_strtrim("-abdoa- a", "ab-"));
	char **n = ft_split("am,go,bo", ',');
	int m = 0;
	while (n[m])
	{
		printf("split array-%d->%s\n", m, n[m]); 
		m++;
	}
	printf("ft-itoa->%s\n", ft_itoa(123));
	printf("ft_strmapi->%s\n", ft_strmapi("abdo", new));
	char aa[] = "abdo ahdad";
	ft_striteri(aa, neww);
	printf("ft_striteri->%s\n", aa);
	ft_putchar_fd('a', 1);
	printf("\n");
	ft_putstr_fd("abdo", 1);
	printf("\n");
	ft_putendl_fd("ahdad", 1);
	ft_putnbr_fd(231, 1);
	printf("\n");
}
