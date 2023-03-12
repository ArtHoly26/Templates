#pragma once
#include "Std.h"
#include "Constance.h"

template<typename T>
void Sort(T arr[], int const size);
template<typename T>
void Sort(T crr[rows][cols], int const rows, int const cols);

template<typename T>
void Sort(T arr[], int const size)    // Отсортирован методом прямой сортировки по возрастанию
{
	int buffer;
	int min;
	for (int i = 0; i < size - 1; i++)
	{
		min = i;

		for (int j = i + 1; j < size; j++) if (arr[j] < arr[min]) min = j;

		buffer = arr[i];
		arr[i] = arr[min];
		arr[min] = buffer;
	}
	cout << "\n";
}
template<typename T>
void Sort(T crr[rows][cols], int const rows, int const cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			for (int k = i; k < rows; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < cols; l++)
				{
					if (crr[k][l] < crr[i][j])
					{
						int buffer = crr[i][j];
						crr[i][j] = crr[k][l];
						crr[k][l] = buffer;
					}
				}
			}
		}
	}
}