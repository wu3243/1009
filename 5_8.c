#include <stdio.h>

void main()
{
	printf("Printing the multiplication table: \n\r");
	int i,j;

	for (i = 1 ; i <= 10 ; i++)
	{
		printf("\n\r");
		for (j = 1 ; j <= 10 ; j++)
			printf ("%2d ", i*j);
    }

}