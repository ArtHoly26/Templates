#pragma once
#include "Constance.h"
#include "Std.h"

void FillRand(int arr[], const  int size, int minValuIn = 0, int maxValuIn = 10);
void FillRand(double arr[], const int size, int minValuIn = 0, int maxValuIn = 10);
void FillRand(char arr[], const int size, int minValuIn = 0, int maxValuIn = 10);
void FillRand(int crr[rows][cols], const int rows, const int cols, int minValuIn = 0, int maxValuIn = 10);
void FillRand(double crr[rows][cols], const int rows, const int cols, int minValuIn = 0, int maxValuIn = 10);
void FillRand(char crr[rows][cols], const int rows, const int cols, int minValuIn = 0, int maxValuIn = 10);

template<typename T>
void UniqueRand(T brr[], const int size);

template<typename T>
void UniqueRand(T crr[rows][cols], const int rows, const  int cols);

template<typename T>
void UniqueRand(T brr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		bool unique;
		do
		{
			brr[i] = rand() % size;
			unique = true;

			for (int j = 0; j < i; j++)
			{
				if (brr[i] == brr[j])
				{
					unique = false;
					break;
				}
			}
		} while (!unique);
	}
}

template<typename T>
void UniqueRand(T crr[rows][cols], const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		bool unique;

		for (int j = 0; j < cols; j++)
		{
			do
			{
				crr[i][j] = rand() % 11;
				unique = true;

				for (int l = 0; l < j; l++)
				{
					if (crr[i][l] == crr[i][j])
					{
						unique = false;
						break;
					}
				}
			} while (!unique);
		}
	}
}

