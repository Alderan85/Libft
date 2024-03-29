#include "libft.h"
void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	size_t	len;

	len = 0;
	if (s2 < s1)
	{
		len = n;
		while (len > 0)
		{
			len--;
			((unsigned char *)s1)[len] = ((unsigned char *)s2)[len];
		}
	}
	else
	{
		len = 0;
		while (len < n)
		{
			((unsigned char *)s1)[len] = ((unsigned char *)s2)[len];
			len++;
		}
	}
	return (s1);
}

int main()
{
	 char source[7] = "banana";
	 char dest[7] = "caccaca";
	 size_t len = 3;
	 
	 printf("%s",ft_memmove(dest,source,len));
}
