/*
	Produsul scalar a 2 vectori
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int size1;
	int size2;
	int index;
	int *array1;
	int *array2;
	int res;

	cout<<"Introduce-ti dimensiunea primului vector: \n";
	cin>>size1;

	cout<<"Introduce-ti dimensiunea al doilea vector: \n";
	cin>>size2;

	index = 0;
	array1 = (int *)malloc(sizeof(int) * size1);
	while(index < size1)
	{
		cout<<"Introduce-ti un numar pentru primul vector: ";
		cin>>array1[index];
		index++;
	}
	index = 0;
	array2 = (int *)malloc(sizeof(int) * size2);
	while(index < size2)
	{
		cout<<"Introduce-ti un numar pentru al 2-lea vector: ";
		cin>>array2[index];
		index++;
	}
	index = 0;
	if (size1 < size2)
	{
		while (index < size1)
		{
			res = res + array1[index]*array2[index];
			index++;
		}
	}
	else
	{
		while (index < size2)
		{
			res = res + array1[index]*array2[index];
			index++;
		}
	}
	cout<<"Produsul scalar este: "<<res;
	return 0;
}