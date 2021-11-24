#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[10] = { 6,43,8,86,44,58,70,23,78,66 };
	int i, j, save, jump , k;
	printf("initial:%3d%3d%3d%3d%3d%3d%3d%3d%3d%3d\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9]);
	for (i = 0; i < 10; i++)
	{
		jump = 0;
		for (j = 0; j < 9 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				save = a[j];
				a[j] = a[j + 1];
				a[j + 1] = save;
				jump = 1;
			}
		}
		if (jump == 0)
		{
			break;
		}
		for (k = 0; k < 10; k++)
		{
			printf("%3d", a[k]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
