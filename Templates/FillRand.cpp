#include "FillRand.h"

void FillRand(int arr[], const int size, int minValuIn, int maxValuIn)
{
	for (int i = 0; i < size; i++) arr[i] = rand() % (maxValuIn - minValuIn) + minValuIn;
}
void FillRand(double arr[],  const int size, int minValuIn, int maxValuIn)
{
	minValuIn *= 100;
	maxValuIn *= 100;

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % (maxValuIn - minValuIn) + minValuIn;
		arr[i] /= 100;
	}
}
void FillRand(char arr[], const int size, int minValuIn, int maxValuIn)
{
	for (int i = 0; i < size; i++) arr[i] = rand() % (maxValuIn - minValuIn) + minValuIn;
}
void FillRand(int crr[rows][cols], const int rows, const int cols, int minValuIn, int maxValuIn)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			crr[i][j] = rand() % (maxValuIn - minValuIn) + minValuIn;
		}
	}
}
void FillRand(double crr[rows][cols], const int rows, const int cols, int minValuIn, int maxValuIn)
{
	minValuIn *= 100;
	maxValuIn *= 100;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			crr[i][j] = rand() % (maxValuIn - minValuIn) + minValuIn;
			crr[i][j] /= 100;
		}
	}
}
void FillRand(char crr[rows][cols], const int rows, const int cols, int minValuIn, int maxValuIn)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			crr[i][j] = rand() % (maxValuIn - minValuIn) + minValuIn;
		}
	}
}





