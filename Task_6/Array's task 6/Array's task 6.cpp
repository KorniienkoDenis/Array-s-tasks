#include <iostream>
#include <ctime>

/*
	
	Task 6.
		Find the sum of the minimum and the maximum elements in the array.

*/

void InitializeArray(int arr[], const int size);
void ShowArray(int arr[], const int size);

int FindMinimumElement(int arr[], const int size);
int FindMaximumElement(int arr[], const int size);
int FindSumMinAndMax(const int minimum ,const int maximum);

int main()
{
	srand(time(nullptr));
	
	const int size = 20;
	int arr[size];

	InitializeArray(arr, size);
	ShowArray(arr, size);

	int minimum = FindMinimumElement(arr, size);
	int maximum = FindMaximumElement(arr, size);

	std::cout << std::endl;

	std::cout << "Minimum: " << minimum << std::endl;
	std::cout << "Maximum: " << maximum << std::endl;

	std::cout << std::endl;

	int sum = FindSumMinAndMax(minimum, maximum);

	std::cout << "The sum of the minimum and maximum elements int he array: " << sum;

	std::cout << std::endl;

	return 0;
}

void InitializeArray(int arr[], const int size)
{
	for (int index = 0; index < size; index++)
		arr[index] = rand() % 20 + 1;
}

void ShowArray(int arr[], const int size)
{
	std::cout << "Array: ";

	for (int index = 0; index < size; index++)
		std::cout << arr[index] << " ";

	std::cout << std::endl;
}

int FindMinimumElement(int arr[], const int size)
{
	int minimum = arr[0];

	for (int index = 0; index < size; index++)
	{
		if (minimum > arr[index])
		{
			minimum = arr[index];
		}
	}

	return minimum;
}
int FindMaximumElement(int arr[], const int size)
{
	int maximum = arr[0];

	for (int index = 0; index < size; index++)
	{
		if (maximum < arr[index])
		{
			maximum = arr[index];
		}
	}

	return maximum;
}

int FindSumMinAndMax(const int minimum, const int maximum)
{
	return minimum + maximum;
}
