/*
	Norma unui vector de dimensiune n
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int size;
	int index;
	int *array;
	int norm;

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
	index = 0;
	norm = 0;
	while (index < size)
	{
		norm = norm + array[index] * array[index];
		index++;
	}
	cout<<"Norma este: "<<sqrt(norm);
	return 0;
}
