#include <stdio.h>

/**
 * main - main block
 * Description: prints all possible combinations of two two-digit numbers
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 98; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			printf("%02d%02d", i / 10, i % 10);
			if (i != 98 || j != 99)
				printf(", ");
		}
	}
	printf("\n");

	return (0);
}
