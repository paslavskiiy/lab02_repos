// Lab_2.2.cpp
// < Паславський Володимир >
// Лабораторна робота № 2.2.
// Лінійні програми.
// Варіант 13
#include <iostream>
using namespace std;
int main()
{
	double a; // вхідний параметр
	double b; // вхідний параметр
	double z1; // результат обчислення 1-го виразу
	//double z2; // результат обчислення 2-го виразу
	cout << "a= "; cin >> a;
	cout << "b=  "; cin >> b;
	z1 = (sin(a) + cos(2 * b - a)) / (cos(a) - sin(2 * b - a));
	//z2 = (1 + sin(2 * b)) / (cos(2 * b));
	cout << endl;
	cout << "z1 = " << z1 << endl;
	//cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}