#include <iostream>

/*
	
	Task 5.
		Find the sum of the negative elements in the array.

*/

void InitializeArray(int arr[], const int size);
void ShowArray(int arr[], const int size);
int FindSumNegativeElements(int arr[], const int size);

int main()
{
	srand(time(nullptr));

	const int size = 20;
	int arr[size];

	InitializeArray(arr, size);
	ShowArray(arr, size);

	std::cout << "The sum of the negative elements in the array: " << FindSumNegativeElements(arr, size);
	std::cout << std::endl;

	return 0;
}

void InitializeArray(int arr[], const int size)
{
	for (int index = 0; index < size; index++)
		arr[index] = -20 + rand() % 40;

	std::cout << std::endl;
}

void ShowArray(int arr[], const int size)
{
	std::cout << "Array: ";

	for (int index = 0; index < size; index++)
		std::cout << arr[index] << " ";

	std::cout << std::endl;
}

int FindSumNegativeElements(int arr[], const int size)
{
	int sumNegativeElements = 0;

	for (int index = 0; index < size; index++)
	{
		if (arr[index] < 0)
		{
			sumNegativeElements += arr[index];
		}
	}

	std::cout << std::endl;

	return sumNegativeElements;
}
