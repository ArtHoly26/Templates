#include "Std.h"
#include "Constance.h"
#include "Search.h"
#include "Evaluate.h"
#include "Shift.h"
#include "Sort.h"
#include "FillRand.h"
#include "Print.h"

int main()
{
	setlocale(LC_ALL, "Rus");
	const int size = 10;
	double arr[size];
	double brr[size];
	int minValuIn;
	int maxValuIn;
	double crr[rows][cols];

	FillRand(arr, size);
	Print(arr, size);
	Search(arr, size);
	cout << "����� ��������� ������� �����:" << Sum(arr, size) << endl;
	cout << "������� �������������� ��������� ������� �����:" << Avg(arr, size) << endl;
	cout << "����������� �������:" << minValueIn(arr, size) << endl;
	cout << "������������ �������:" << maxValuenIn(arr, size);
	Sort(arr, size);
	Print(arr, size);
	shiftLeft(arr, size);
	Print(arr, size);
	shiftRight(arr, size);
	Print(arr, size);
	cout << "--------------------------------------------------------------------------" << endl;
	UniqueRand(brr, size);
	Print(arr, size);
	cout << "--------------------------------------------------------------------------" << endl;
	FillRand(crr, rows, cols);
	Print(crr, rows, cols);
	Search(crr, rows, cols);
	cout << "����� ��������� ���������� ������� �����:" << Sum(crr, rows, cols) << endl;
	cout << "������� �������������� ��������� ���������� ������� �����:" << Avg(crr, rows, cols) << endl;
	cout << "����������� �������:" << minValueIn(crr, rows, cols) << endl;
	cout << "������������ �������:" << maxValuenIn(crr, rows, cols) << endl;
	Sort(crr, rows, cols);
	Print(crr, rows, cols);
	shiftLeft(crr, rows, cols);
	Print(crr, rows, cols);
	shiftRight(crr, rows, cols);
	Print(crr, rows, cols);
	cout << "--------------------------------------------------------------------------" << endl;
	UniqueRand(crr, rows, cols);
	Print(crr, rows, cols);
	cout << "--------------------------------------------------------------------------" << endl;
}









