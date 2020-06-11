#include <stdio.h>

int power(int arr[5])
{
	int size = sizeof(arr);
	int ans = 1;
	printf("size of array: %d", size);
	for (int i = 0; i < size; i++)
	{
		ans *= arr[i];
	}
	return ans;
}

int main()
{
	int arr[5] = { 1,2,3,4,5 };
	printf("size of array: %d", sizeof(arr));
	printf("pow by array: %d", power(arr));
	return 0;
}
