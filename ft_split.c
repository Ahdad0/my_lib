#include "libft.h"

static void free_p(char **s, unsigned int o);
static int count(char const *s, char c)
{
	int i = 0, cou = 0;

	while (s[i])
	{
		if ((s[i] != c && s[i - 1] == c) || (s[i] != c && s[i + 1] == '\0'))
			cou++;
		i++;
	}
	return cou;
}

static void free_p(char **s, unsigned int o)
{
	unsigned int i = 0;

	while (i <= o)
	{
		free(s[i]);
	}
	free(s);
}
char **ft_split(char const *s, char c)
{
	int len = count(s, c), i = 0, o = 0, start = 0;
	char **n = malloc((len + 1) * (sizeof(char *)));
	if (!n)
	{
		free(n);
		return (NULL);
	}
	while(s[i])
	{
		if (s[i] == c)
		{
			n[o] = ft_substr(s, start, i - start);
			if (!n[o])
			{
				free_p(n, o);
				return (NULL);
			}
			start = i + 1;
			o++;
		}
		i++;
	}
	n[o] = ft_substr(s, start, i - start);
	if (!n[o])
	{
		free_p(n, o);
		return (NULL);
	}
	o++;
	n[o] = '\0';
	return n;
}
