// Lab_03_4.cpp
// Мельничук Юліан
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 18
#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R; // вхідний параметр
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;
	// розгалуження в повній формі
	if ((x >= y && (x - R) * (x - R) + (y - R) * (y - R) <= R * R) || (x <= y && (x + R) * (x + R) + (y + R) * (y + R) <= R * R))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}