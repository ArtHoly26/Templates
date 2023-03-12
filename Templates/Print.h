#pragma once
#include "Std.h"
#include "Constance.h"

template<typename T>
void Print(T arr[], int const size);
template<typename T>
void Print(T crr[rows][cols], const int rows, const int cols);

template<typename T>
void Print(T arr[], int const size)
{
	for (int i = 0; i < size; i++) cout << arr[i] << "\t";

	cout << "\n";

}
template<typename T>
void Print(T crr[rows][cols], const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << crr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "\n";

}