#include <iostream>
#include <ctime>

/*
	Task 1.
	---------------------------------------
	Find the most biggest element of array.
	---------------------------------------
*/

int main()
{
	srand(time(nullptr));

	const int size_arr = 10;
	int arr[size_arr];
	int max_element = 0;

	std::cout << "Array: ";

	for (int index = 0; index < size_arr; index++)
	{
		arr[index] = rand() % 10;

		std::cout << arr[index] << " ";
	}

	for (int index = 0; index < size_arr; index++)
		if (arr[index] > max_element)
			max_element = arr[index];

	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "The most biggest element of array is: " << max_element << "\n";

	return 0;
}