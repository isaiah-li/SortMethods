#include <stdio.h>


void Insert(int arr[], int n)
{
	int key = arr[n];
	int i = n;
	while (arr[i-1]>key)
	{
		arr[i] = arr[i - 1];
		i--;
		if (i==0)
		{
			//∑¿÷π‘ΩΩÁ
			break;
		}
	}
	arr[i] = key;
}

void InsertSort(int arr[], int n)
{
	for (int i = 1; i < n; i++)
	{
		Insert(arr, i);
	}
}

int main()
{
	int arr[] = { 5,1,6,7,2,3,9,4,8 };
	int length = 9;
	InsertSort(arr, length);
	for (int i = 0; i < length; i++)
	{
		printf("%d\n", arr[i]);

	}
	return 0;
}