// #define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int array[10] = {8, 1, 4, 0, 5, 7, 2, 9, 3, 6};
	int max = array[0];

	for (int i = 1; i < 10; i++)
	{
		if (max < array[i])
		{
			max = array[i];
		}
		else
		{
			/* do nothing */
		}
	}

	printf("max: %d\n", max);

	return 0;
}