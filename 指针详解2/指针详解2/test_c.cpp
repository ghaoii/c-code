#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//ц╟ещеепР
void bubble_sort(int arr[10], int sz)
{
	int i = 0;
	int j = 0;
	int tmp = 0;
	for (i = 0; i < sz - 1 - i; i++)
	{
		for (j = i; j < sz - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof[0];

	bubble_sort(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}