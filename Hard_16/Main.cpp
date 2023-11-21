#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	srand(time(NULL));
	
	int C[6][8] {};

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			C[i][j] = rand() % (201) - 100;
			cout << setw(5) << C[i][j];
		}
		cout << endl;
	}
	cout << endl;

	system("pause");
	return 0;
}