#include <iostream>
#include <ctime>

/*
	
	Task 3.
		Write a binary search program for a key in the integer array.

*/

void InitializeArray(int arr[], const int size);
void ShowArray(int arr[], const int size);
void SortArray(int arr[], const int size);
int BinarySearch(const int arr[], int left, int right, int key);

int main()
{
	srand(time(nullptr));

	int key = 0;
	const int size = 25;
	int arr[size];

	InitializeArray(arr, size);
	ShowArray(arr, size);
	std::cout << "-----------------------------------------------------------------------------------------------\n";
	SortArray(arr, size);

	std::cout << std::endl;
	std::cout << "Enter number which you want to find in the array: ";
	std::cin >> key;

	int index = BinarySearch(arr, 0, size, key);

	std::cout << std::endl;
	std::cout << "You entered: " << key << std::endl;
	
	if (index >= 0)
		std::cout << "Your number standing under index: " << index << std::endl;
	else
		std::cout << "Your number is not in the array!\n";

	return 0;
}

void InitializeArray(int arr[], const int size)
{
	for (int index = 0; index < size; index++)
		arr[index] = -25 + rand() % 50;

	std::cout << std::endl;
}

void ShowArray(int arr[], const int size)
{
	std::cout << "Array: ";

	for (int index = 0; index < size; index++)
		std::cout << arr[index] << " ";

	std::cout << std::endl;
}

void SortArray(int arr[], const int size)
{
	for (int index = 0; index < size; index++)
	{
		for (int j = index + 1; j < size; j++)
		{
			if (arr[j] < arr[index])
			{
				std::swap(arr[index], arr[j]);
			}
		}
	}

	std::cout << "Sorted the array: ";

	for (int index = 0; index < size; index++)
	{
		std::cout << arr[index] << " ";
	}

	std::cout << std::endl;
}

int BinarySearch(const int arr[], int left, int right, int key)
{
	while (true)
	{
		int middle = (left + right) / 2;

		if (key < arr[middle])
		{
			right = middle - 1;
		}
		else if (key > arr[middle])
		{
			left = middle + 1;
		}
		else
			return middle;

		if (left > right)
			return -1;
	}

	std::cout << std::endl;
}
