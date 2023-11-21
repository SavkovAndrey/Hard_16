#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

void sort(vector<int>& A);                                         // сортировка

int main()
{
	setlocale(LC_ALL, "RU");
	srand(time(NULL));
	
	int C[6][8] {};

	for (int i = 0; i < 6; i++)                       // Заполняем и выводим
	{
		for (int j = 0; j < 8; j++)
		{
			C[i][j] = rand() % (201) - 100;
			cout << setw(5) << C[i][j];
		}
		cout << endl;
	}
	cout << endl;

	vector<int> A;

	for (int i = 0; i < 6; i++)                        // Заполнение вектора А положительными элементами из массива С
	{
		for (int j = 0; j < 8; j++)
		{
			if (C[i][j] > 0)
			{
				A.push_back(C[i][j]);
			}
		}
	}

	sort(A);

	for (int i = 0; i < A.size(); i++)                 // вывод вектора А
	{
		cout << setw(4) << A[i];
	}
	cout << endl;

	system("pause");
	return 0;
}

void sort(vector<int>&A)
{
	int temp = 0;;
	for (int i = 0; i < A.size(); i++)
	{
		for (int j = 0; j < A.size() - 1; j++)
		{
			if (A[j] > A[j + 1])
			{
				temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
			}
		}
	}
}