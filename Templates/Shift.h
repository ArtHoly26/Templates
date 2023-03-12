#pragma once
#include "Std.h"
#include "Constance.h"

template<typename T>
void shiftLeft(T arr[], int const size);
template<typename T>
void shiftLeft(T crr[rows][cols], int const rows, int const cols);

template<typename T>
void shiftRight(T arr[], int const size);
template<typename T>
void shiftRight(T crr[rows][cols], int const rows, int const cols);

template<typename T>
void shiftLeft(T arr[], int const size)
{
	int on_Left;
	cout << "На сколько едениц необходимо сдвинуть массив влево?" << endl;
	cin >> on_Left;
	for (int i = 0; i < on_Left; i++)
	{
		int buffer = arr[0];

		for (int i = 0; i < size; i++) arr[i] = arr[i + 1];

		arr[size - 1] = buffer;
	}

}
template<typename T>
void shiftLeft(T crr[rows][cols], int const rows, int const cols)
{
	int on_Left;
	cout << "На сколько едениц необходимо сдвинуть массив влево?" << endl;
	cin >> on_Left;
	int buffer;

	for (int i = 0; i < rows; i++)
	{
		for (int l = 0; l < on_Left; l++)
		{
			buffer = crr[i][0];

			for (int j = 0; j < cols - 1; j++) crr[i][j] = crr[i][j + 1];

			crr[i][cols - 1] = buffer;
		}
	}
}

template<typename T>
void shiftRight(T arr[], int const size)
{
	int on_Right;
	cout << "На сколько едениц необходимо сдвинуть массив вправо?" << endl;
	cin >> on_Right;
	for (int i = 0; i < on_Right; i++)
	{
		int buffer = arr[size - 1];

		for (int i = 1; i < size; i++) arr[size - i] = arr[size - 1 - i];

		arr[0] = buffer;
	}

}
template<typename T>
void shiftRight(T crr[rows][cols], int const rows, int const cols)
{
	int on_Right;
	cout << "На сколько едениц необходимо сдвинуть массив вправо?" << endl;
	cin >> on_Right;
	int buffer;

	for (int i = 0; i < rows; i++)
	{
		for (int l = 0; l < on_Right; l++)
		{
			buffer = crr[i][cols - 1];

			for (int j = 1; j < cols; j++) crr[i][cols - j] = crr[i][cols - 1 - j];

			crr[i][0] = buffer;
		}
	}
}