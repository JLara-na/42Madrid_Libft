#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dstbfr;
	char	*srcbfr;
	size_t	i;

	i = 0;
	dstbfr = (char *) dest;
	srcbfr = (char *) src;
	if (dstbfr > srcbfr)
		while (n-- > 0)
			dstbfr[n] = srcbfr[n];
	else
	{
		while (i < n && srcbfr != dstbfr)
		{
			dstbfr[i] = srcbfr[i];
			i++;
		}
	}
	return (dstbfr);
}
