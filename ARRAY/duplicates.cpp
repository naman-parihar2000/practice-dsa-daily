#include <iostream>
using namespace std;

void findDuplicates(int arr[], int n)
{

	for (int i = 0; i < n; i++)
	{
		int index = arr[i] % n;
		arr[index] += n;
	}

	for (int i = 0; i < n; i++)
	{
		if ((arr[i] / n) >= 2)
			cout << i << " ";
	}
}

int main()
{
	int array[] = { 1, 6, 3, 1, 3, 6, 6 };
	int size = sizeof(array) / sizeof(array[0]);

	cout << "The repeating entities are: \n";

	findDuplicates(array, size);
	return 0;
}
