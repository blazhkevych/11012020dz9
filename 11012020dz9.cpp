/*
* Пользователь 	вводит с клавиатуры диаметр окружности.Посчитать площадь и периметр окружности.
*/
#include <iostream>
#include <Windows.h>;
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	double pi, r, s, d, p;
	cout << "Введите диаметр окружности : ";
	cin >> d;
	pi = 3.1415;
	r = d / 2;
	s = pi * (r * r);
	p = 2 * pi * r;
	cout << "Площадь окружности = " << s << endl;
	cout << "Периметр окружности = " << p << endl;
}
