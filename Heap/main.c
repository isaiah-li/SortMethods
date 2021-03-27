#include <stdio.h>

void Swap(int arr[], int i, int j)
{
	int tmp = arr[i];
	arr[i] = arr[j];
	arr[j] = tmp;
}
//完全二叉树，父节点大于子节点
//对一个节点做heapify的时候，必须保证它的所有子树都已经是堆。
void Heapify(int tree[], int num, int parent)
{
	if (parent >= num)
	{
		return;
	}
	int sonleft = 2 * parent + 1;
	int sonright = 2 * parent + 2;
	int max = parent;
	if (sonleft <num && tree[sonleft]>tree[max])
	{
		max = sonleft;
	}
	if (sonright<num && tree[sonright]>tree[max])
	{
		max = sonright;
	}
	if (max != parent)
	{
		Swap(tree, max, parent);
		Heapify(tree, num, max);
	}
}
//build_heap函数是从最后一个不是叶节点的点开始往前做heapify操作的，所以最后是可以形成一个堆。
//最后一个节点的parent节点,往前倒
void BuildHeap(int tree[], int n)
{
	int last_node = n - 1;
	int parent = (last_node - 1) / 2;
	for (int i = parent; i >= 0; i--)
	{
		Heapify(tree, n, i);
	}
}

//堆排序，换根节点与最后一个节点，断开最后一个
void HeapSort(int tree[], int num)
{
	//先建堆
	BuildHeap(tree, num);
	for (int i = num - 1; i >= 0; i--)
	{
		Swap(tree, i, 0);
		Heapify(tree, i, 0);	//i代表剩下节点的数量
	}

}



int main()
{
	int tree[] = { 5,1,6,7,2,3,9,4,8 };
	int length = 9;
	HeapSort(tree, length, 0);
	for (int i = 0; i < length; i++)
	{
		printf("%d\n", tree[i]);

	}
	return 0；
}