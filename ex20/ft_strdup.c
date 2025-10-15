#include <unistd.h>

char	*ft_strdup(char *src)
{
	char	*str;

	str = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_strcpy(str, src);
	return (str);
}
