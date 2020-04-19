#include <unistd.h>
#include <stdlib.h>

typedef struct number
{
	int	n;
	int	up;
	int	down;
}		t_num;

///////////////////////////////////////////////////////////////////////
void	set_sign(int *a, int size, t_num **elem)
{
	int	i;

	if (size > 0)
	{
		if (!(*elem = malloc(sizeof(t_num) * size)))
			return;
	}
	i = 0;
	while(i < size)
	{
		(*elem)[i].n = a[i];
		(*elem)[i].up = i;
		(*elem)[i].down = size - i;
		i++;  
	}
}
///////////////////////////////////////////////////////////////////////
