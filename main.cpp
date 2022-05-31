#include <iostream.h>

extern "C" near bool paritycheck(int i, int v, int* a);
extern "C" near void addvalue(int* c, int v);

int main()
{
	int c = 0, sum = 0;
	float result;
	int size = 0;

	cout << "Enter the number of elements in array: ";
	cin >> size;
	while (size <= 0)
	{
		cout << "Enter a correct number of elements! \n";
		cout << "Enter the number of elements in array: ";
		cin >> size;
	}

	int* array = new int[size];
	for (int i = 0; i < size; i++)
	{
		cout << "Enter the next element of array: ";
		cin >> array[i];
	}

	for (int i = 0; i < size; i++)
	{
		if (paritycheck(i, array[i], &c))
		{
			addvalue(&sum, array[i]);
		}
	}

	if (c == 0)
	{
		cout << "There was no positive elements on even positions. The result is undefined.";
	}
	else
	{
		result = sum / c;
		cout << "Result: " << result;
	}

	return 0;
}