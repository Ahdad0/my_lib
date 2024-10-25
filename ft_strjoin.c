#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	int len = ft_strlen(s1) + ft_strlen(s2);
	char *p = ft_calloc(len, sizeof(char));
	ft_strlcpy(p, s1, ft_strlen(s1));
	ft_strlcat(p, s2, ft_strlen(s2));
	return p;
}
