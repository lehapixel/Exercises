/* Напишите программу с функцией для перевода скорости, указанной в км/ч ("километры в час")
в м/с ("метры в секунду"). Учесть, что в 1 километре - 1000 метров, 
в 1 минуте - 60 секунд, в 1 часе - 60 минут. */

#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

double getSpeedKmH() {	// Функция считывания значения скорости в км/ч
	double KmH;
	cout << "Для перевода велечин, укажите скорость в км/ч: ";
	cin >> KmH;
	if ((KmH >= 0)) {
		return KmH;
	}
	else {
		cout << endl << "Введено некоректное значение!" << endl << endl << endl;
		return getSpeedKmH();
	}
}

double mSInKmH(const double speed) { // Функция перевода км/ч в м/c
	const double mInKm = 1000;
	const double secondInHour = 3600;
	return speed * mInKm / secondInHour;
}

int main() {
	system("chcp 65001>nul"); // Команда для нормального отображения символов в командной строке Windows
	/*Вывод формулировки задания в консоль*/
	cout << "Задание:" << endl << "Напишите программу с функцией для перевода скорости, указанной в км/ч (\"километры в час\")" << endl << "в м/с (\"метры в секунду\"). Учесть, что в 1 километре - 1000 метров," << endl << "в 1 минуте - 60 секунд, в 1 часе - 60 минут." << endl << endl;
	//
	const double speedKmH = getSpeedKmH();
	cout << endl << "Скорость равняется: " << mSInKmH(speedKmH) <<" м/c" << endl << endl;
	system ("pause");
}