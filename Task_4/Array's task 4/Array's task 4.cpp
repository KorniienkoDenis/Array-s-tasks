#include <iostream>
#include <ctime>

/*
	
	Task 4.
		Find the minimum of the modulo element in the array.

*/

void InitializeArray(int arr[], const int size);
void ShowArray(int arr[], const int size);
void ShowArrayWithElementsModulo(int arr[], const int size);
int FindMinimumModulElement(int arr[], const int size);

int main()
{
	srand(time(nullptr));

	const int size = 20;
	int arr[size];

	InitializeArray(arr, size);
	ShowArray(arr, size);

	std::cout << "---------------------------------------------------------------------------\n";

	ShowArrayWithElementsModulo(arr, size);

	std::cout << "Minimum element modulo is: " << FindMinimumModulElement(arr, size);

	std::cout << std::endl;

	return 0;
}

void InitializeArray(int arr[], const int size)
{
	for (int index = 0; index < size; index++)
		arr[index] = -15 + rand() % 31;

	std::cout << std::endl;
}

void ShowArray(int arr[], const int size)
{
	std::cout << "Array: ";

	for (int index = 0; index < size; index++)
		std::cout << arr[index] << " ";

	std::cout << std::endl;
}

void ShowArrayWithElementsModulo(int arr[], const int size)
{
	std::cout << "Array with elements modulo: ";

	for (int index = 0; index < size; index++)
	{
		if (arr[index] < 0)
		{
			arr[index] = arr[index] + -2 * arr[index];
		}
		std::cout << arr[index] << " ";
	}

	std::cout << std::endl;
}

int FindMinimumModulElement(int arr[], const int size)
{
	int minimumElement = arr[0];

	for (int index = 0; index < size; index++)
	{
		if (minimumElement > arr[index])
		{
			minimumElement = arr[index];
		}
	}

	std::cout << std::endl;

	return minimumElement;
}
