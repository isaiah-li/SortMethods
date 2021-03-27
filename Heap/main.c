#include <stdio.h>

void Swap(int arr[], int i, int j)
{
	int tmp = arr[i];
	arr[i] = arr[j];
	arr[j] = tmp;
}
//��ȫ�����������ڵ�����ӽڵ�
//��һ���ڵ���heapify��ʱ�򣬱��뱣֤���������������Ѿ��Ƕѡ�
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
//build_heap�����Ǵ����һ������Ҷ�ڵ�ĵ㿪ʼ��ǰ��heapify�����ģ���������ǿ����γ�һ���ѡ�
//���һ���ڵ��parent�ڵ�,��ǰ��
void BuildHeap(int tree[], int n)
{
	int last_node = n - 1;
	int parent = (last_node - 1) / 2;
	for (int i = parent; i >= 0; i--)
	{
		Heapify(tree, n, i);
	}
}

//�����򣬻����ڵ������һ���ڵ㣬�Ͽ����һ��
void HeapSort(int tree[], int num)
{
	//�Ƚ���
	BuildHeap(tree, num);
	for (int i = num - 1; i >= 0; i--)
	{
		Swap(tree, i, 0);
		Heapify(tree, i, 0);	//i����ʣ�½ڵ������
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
	return 0��
}