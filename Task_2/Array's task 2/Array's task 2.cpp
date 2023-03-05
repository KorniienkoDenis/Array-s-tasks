#include <iostream>
#include <ctime>

/*
	
	Task 2.
	---------------------------------------------------
	Find product of elements of array with odd numbers.
	---------------------------------------------------

*/

int main()
{
	srand(time(nullptr));

	const int size_arr = 10;
	int arr[10];
	int productOddElements = 0;

	std::cout << "Array: ";

	for (int index = 0; index < size_arr; index++)
	{
		arr[index] = rand() % 11;

		std::cout << arr[index] << " ";
	}

	for (int index = 0; index < size_arr; index++)
		if (index % 2 == 1)
			productOddElements += arr[index];

	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "Product of elements of array with odd numbers is: " << productOddElements;

	std::cout << std::endl;

	return 0;
}