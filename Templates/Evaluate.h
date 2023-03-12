#pragma once
#include "Std.h"
#include "Constance.h"

template<typename T>
T Sum(T arr[], int const size);
template<typename T>
T Sum(T crr[rows][cols], int const rows, int const cols);

template<typename T>
T Avg(T arr[], int const size);
template<typename T>
T Avg(T crr[rows][cols], int const rows, int const cols);

template<typename T>
T minValueIn(T arr[], int const size);
template<typename T>
T minValueIn(T crr[rows][cols], int const rows, int const cols);

template<typename T>
T maxValuenIn(T arr[], int const size);
template<typename T>
T maxValuenIn(T crr[rows][cols], int const rows, int const cols);

template<typename T>
T Sum(T arr[], int const size)
{
	T summa = 0;
	for (int i = 0; i < size; i++) summa += arr[i];
	return summa;
}
template<typename T>
T Sum(T crr[rows][cols], int const rows, int const cols)
{
	T summ = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			summ += crr[i][j];
		}
	}
	return summ;
}

template<typename T>
T Avg(T arr[], int const size)
{
	return (T)Sum(arr, size) / size;
}
template<typename T>
T Avg(T crr[rows][cols], int const rows, int const cols)
{
	return (T)Sum(crr, rows, cols) / (rows * cols);
}

template<typename T>
T minValueIn(T arr[], int const size)
{
	T min = arr[0];
	for (int i = 0; i < size; i++) if (min > arr[i]) min = arr[i];
	return min;
}
template<typename T>
T minValueIn(T crr[rows][cols], int const rows, int const cols)
{
	T min = crr[0][0];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (crr[i][j] < min) min = crr[i][j];
		}
	}
	return min;
}

template<typename T>
T maxValuenIn(T arr[], int const size)
{
	T max = arr[0];
	for (int i = 0; i < size; i++) if (max < arr[i]) max = arr[i];

	return max;
}
template<typename T>
T maxValuenIn(T crr[rows][cols], int const rows, int const cols)
{
	T max = crr[0][0];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (crr[i][j] > max) max = crr[i][j];
		}
	}
	return max;
}