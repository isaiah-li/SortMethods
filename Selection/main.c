#include <stdio.h>

int FindMaxPos(int arr[], int n)
{
	int max = arr[0];
	int pos = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			pos = i;
		}
	}
	return pos;
}

void SelectionSort(int arr[], int n)
{
	while (n > 1)
	{
		int pos = FindMaxPos(arr, n);
		int tmp = arr[pos];
		arr[pos] = arr[n - 1];
		arr[n - 1] = tmp;
		n--;
	}


}

int main()
{
	int arr[] = { 5,1,6,7,2,3,9,4,8 };
	int length = 9;
	SelectionSort(arr, length);
	for (int i = 0; i < length; i++)
	{
		printf("%d\n", arr[i]);

	}

}