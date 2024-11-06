/*
	Metoda selectiei directe. Sortati descrescator
*/

#include <iostream>

using namespace std;

int check_sort(int *array, int size)
{
	int index;
	int res;

	res = 0;
	index = 0;
	while (index < size - 1)
	{
		if (array[index] < array[index + 1])
			res++;
		index++;
	}
	return res;
}

void print_array(int *array, int size)
{
	int index;

	index = 0;
	while (index < size )
	{
		cout<<array[index]<<" ";
		index++;
	}
}

int main()
{
	int size;
	int index;
	int *array;
	int temp;
	

	cout<<"Introduce-ti dimensiunea n: \n";
	cin>>size;

	index = 0;
	array = (int *)malloc(sizeof(int) * size);
	while(index < size)
	{
		cout<<"Introduce-ti un numar: ";
		cin>>array[index];
		index++;
	}
	while (check_sort(array,size) != 0)
	{
		index = 0;
		while(index < size - 1)
		{
			if (array[index] < array[index + 1])
			{
				temp = array[index];
				array[index] = array[index + 1];
				array[index + 1] = temp;
			}
			index++;
		}
	}
	print_array(array, size);
}