#include <stdio.h>

void Bubble(int arr[], int n)
{
	int tmp;
	for (int i = 0; i < n - 1; i++)
	{
		if (arr[i] > arr[i + 1])
		{
			tmp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = tmp;
		}
	}
}

void BubbleSort(int arr[], int n)
{
	for (int i = n; i >= 1; i--)
	{
		Bubble(arr, n);
	}
}

int main()
{
	int arr[] = { 5,1,6,7,2,3,9,4,8 };
	int length = 9;
	BubbleSort(arr, length);
	for (int i = 0; i < length; i++)
	{
		printf("%d\n", arr[i]);

	}

}