#include <iostream>
#include <ctime>

/*
	
	Task 7.
		Find the least pair element in the array.

*/

void InitializeArray(int* arr, const int size);
void ShowArray(int* arr, const int size);
void ShowArrayWithPairElements(int* arr, const int size);
int FindMinimumPairElement(int* arr, const int size);

int main()
{
	srand(time(nullptr));

	const int size = 10;
	int arr[size];

	InitializeArray(arr, size);

	ShowArray(arr, size);
	ShowArrayWithPairElements(arr, size);

	std::cout << "The least pair element: " << FindMinimumPairElement(arr, size) << "\n";

	return 0;
}

void InitializeArray(int* arr, const int size)
{
	for (int index = 0; index < size; index++)
		arr[index] = -5 + rand() % 15 + 1;

	std::cout << std::endl;
}

void ShowArray(int* arr, const int size)
{
	std::cout << "Array: ";

	for (int index = 0; index < size; index++)
		std::cout << arr[index] << " ";
	
	std::cout << std::endl;
}

void ShowArrayWithPairElements(int* arr, const int size)
{
	std::cout << "The array with pair elements: ";

	for (int index = 0; index < size; index++)
		if (index % 2 == 0)
			std::cout << arr[index] << " ";

	std::cout << std::endl;
}

int FindMinimumPairElement(int* arr, const int size)
{
	int minimumPair = arr[0];

	for (int index = 0; index < size; index++)
		if (index % 2 == 0)
			if (arr[index] < minimumPair)
				minimumPair = arr[index];

	std::cout << std::endl;

	return minimumPair;
}
