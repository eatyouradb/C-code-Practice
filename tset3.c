#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void bubble_sort(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int n = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = n;
			}
		}
	}
}
int main()
{
	int arr[] = { 10,11,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	bubble_sort(arr,sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}