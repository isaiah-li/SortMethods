#include <stdio.h>
//小建议：冒泡排序的循环中可以加个变量flag用true,
//false作为判断本趟冒泡是否交换的标志，若遍历一遍后未发生交换，
//说明表已经提前有序，不必继续排序了
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
	return 0;

}