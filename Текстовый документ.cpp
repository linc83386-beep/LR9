// Внесені зміни в код і подальша його заміна на інший.

#include <iostream>
#include <math.h>
#include <iomanip>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	double x;
	cout << "Введіть x=";
	cin >> x;

	double product = 1.0;
	for (int i = 1; i <= 10; i++) {
		product *= log (i*x);
	}
	double Z = sin(product);
	cout << "Z=" << Z << endl;

	return 0;
}
