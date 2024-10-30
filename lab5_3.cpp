/*
	Determinati max si min dintr-un vector
*/

#include <iostream>

using namespace std;

int main()
{
	int size;
	int index;
	int *array;
	int min;
	int max;

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
	min = 2147483647;
	max = -2147483648;
	index = 0;
	while(index < size)
	{
		if (array[index] < min)
			min = array[index];
		if (array[index] > max)
			max = array[index];
		index++;
	}
	cout<<"Min = "<<min<<"\n"<<"Max = "<<max;
}