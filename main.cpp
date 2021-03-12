
#include <iostream>
#include <iomanip>
using namespace std;

void swap (float * const, float * const);

template <class T>
void selectionSort (T array[], const int size)
{
	int smallest;

	for (int i = 0; i < size - 1; i++)
	{
		smallest = i;
		for (int index = i + 1; index < size; index++)
		{
			if (array[index] < array [smallest])
				smallest = index;
		}
		swap (&array[i], &array[smallest]);
	}
}

void swap(float * element1Ptr, float * element2Ptr)
{
	float hold = *element1Ptr;
	*element1Ptr = *element2Ptr;
	*element2Ptr = hold;
}

int main()
{
	int arraySize;
	cout << "Enter number of elements in Array: \n";
	cin >> arraySize;
	float a[arraySize];

	cout<<"Enter elements of array: \n";

	for (int i = 0; i < arraySize; i++)
		cin >> a[i];

	cout << "Data items in original order\n";
	for (int j = 0; j < arraySize; j++)
		cout << setw(4) << a[j];
	cout << endl;
	selectionSort(a, arraySize);

	cout << "Data items in ascending order\n";
	for (int k = 0; k < arraySize; k++)
		cout << setw(4) << a[k];
	cout << endl;
	return 0;
}
