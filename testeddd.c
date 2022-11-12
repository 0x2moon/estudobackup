#include <stdio.h>
#include <stdlib.h>

 vector = create(vector, size);
    fillWithRandNums(vector, size, max_rand);

    sq

void swap(int *__n1, int *__n2)
{
    int aux = *__n1;
    *__n1 = *__n2;
    *__n2 = aux;
}

void quicksort(int *vector, int start, int end)
{
	int i = start, j = end-1;
	int pivo = vector[(start + end) / 2];

	while(i <= j)
	{
		while(vector[i] < pivo && i < end)
		{
			i++;
		}
		while(vector[j] > pivo && j > start)
		{
			j--;
		}
		if(i <= j)
		{
            swap(vector+i, vector+j);
			i++;
			j--;
		}
	}
	if(j > start)
		quicksort(vector, start, j+1);
	if(i < end)
		quicksort(vector, i, end);
}
