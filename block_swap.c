#include"header.h"

void swap(char* arr, int i1, int i2, int bs)
{
	for (int i = 0; i < bs; i++)
	{
		char temp;
		temp= arr[i1 + i];
		arr[i1 + i] = arr[i2 + i];
		arr[i2 + i] = temp;
	}
}

void block_swap(char* arr, int bs, int arrs)
{
	//block의 크기가 0이거나 배열성분의 개수 같을경우 swap된 결과는 같다
	if (bs == 0 || bs == arrs)
		return;

	//block의 크기가 배열성분의 개수의 절반일때
	if (arrs - bs == bs)
	{
		swap(arr, 0, arrs - bs, bs);
		return;
	}

	//block의 크기가 배열 성분의 개수-blcok의 크기보다 작을 때
	if (bs < arrs - bs)
	{
		swap(arr, 0, arrs - bs, bs);
		block_swap(arr, bs, arrs - bs);
	}

	//block의 크기가 배열 성분의 개수-block의 크기보다 클 때
	if (bs > arr - bs)
	{
		swap(arr, 0, bs, arrs - bs);
		block_swap(arr + arrs - bs, (2 * bs) - arrs, bs);
	}
}