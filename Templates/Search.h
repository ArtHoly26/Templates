#pragma once
#include "Std.h"
#include "Constance.h"

template<typename T>
void Search(T arr[], int size);
template<typename T>
void Search(T crr[rows][cols], int const rows, int const cols);

template<typename T>
void Search(T arr[], int size)
{
	int score = 0;
	int f = 1;
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] == arr[j])
			{
				score++;
			}
		}

		if (score == 1)
		{
			cout << arr[i] << "\t";
			f++;
			score = 0;
		}
		score = 0;
	}
	cout << endl;
	cout << "Колличетсво повторений : " << f;
	cout << endl;
}
template<typename T>
void Search(T crr[rows][cols], int const rows, int const cols)
{
	int score = 0;
	int f = 1;
	cout << "Строчки с одинаковыми значениями элементов: " << endl;
	for (int i = 0; i < rows; i++)
	{
		cout << "Строчка " << i << "\t";

		for (int k = 0; k < cols; k++)
		{
			for (int j = k + 1; j < cols; j++)
			{
				if (crr[i][k] == crr[i][j])
				{
					score++;
				}
			}

			if (score == 1)
			{
				cout << crr[i][k] << "\t";
				f++;
				score = 0;
			}
			score = 0;
		}

		cout << endl;
	}
	cout << endl;
	cout << "Колличетсво повторений : " << f;
	cout << endl;
}