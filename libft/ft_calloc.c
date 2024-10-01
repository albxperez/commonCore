

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	int	*ptr;

	ptr = (int*)malloc(nelem * elsize);
	if(ptr == NULL)
		return NULL;
	ft_bzero(arr, elsize);
	return ptr;
}

int	main(void)
{
	int *array;
	size_t num = 5;
	array = (int *)ft_calloc(num, * sizeof(int));

    	for (size_t i = 0; i < num; i++)
    	{
        	printf("%d ", array[i]);
    	}
	free(array);
	return 0;
}
