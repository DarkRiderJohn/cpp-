#include <iostream>

void sort_array(int *arr,int size);

int main()
{
	int size;
	std::cout << "Enter the size of array:";
	std::cin >> size;

	int arr[size];
	for(int i = 0; i < size;i++)
	{
		std::cout << "Enter:";
		std::cin >> arr[i];
	}

	sort_array(arr,size);

	for(int i : arr)
	{
		std::cout << i;
	}
}

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void sort_array(int *arr,int size)
{
	for(int i = 0; i < size;i++) // 4 3 2 1 1
	{
		int lowest = arr[i]; // 4 
		for(int j = i+1; j < size; j++)
		{
			if(arr[j] < lowest) // 3 
			{
				lowest = arr[j];
				swap(arr[i],arr[j]); // 3 
			}
		}
	}
}